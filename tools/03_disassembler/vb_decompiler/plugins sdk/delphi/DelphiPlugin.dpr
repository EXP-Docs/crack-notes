library DelphiPlugin;

uses
  SysUtils,
  Classes,
  Dialogs,
  Windows,
  Forms,
  Main in 'Main.pas' {frmMain};

const
  { vlType constants }
  GetVBProject = 1;
  SetVBProject = 2;
  GetFileName = 3;              // (v3.5+)
  IsNativeCompilation = 4;      // (v3.5+)
  ClearAllBuffers = 5;          // need if your plugin decompile new language and need to clear all structures (v3.9+)
  GetCompiler = 6;              // 1 - vb, 2 - .net, 3 - delphi, 4 - unknown (v3.9+)
  IsPacked = 7;                 // 1 - packed, 0 - not packed (v3.9+)
  SetStackCheckBoxValue = 8;    // 0 - unchecked, 1 - checked (v3.9+)
  SetAnalyzerCheckBoxValue = 9; // 0 - unchecked, 1 - checked (v3.9+)
  GetVBFormName = 10;
  SetVBFormName = 11;
  GetVBForm = 12;
  SetVBForm = 13;
  GetVBFormCount = 14;
  GetSubMain = 20;
  SetSubMain = 21;
  GetModuleName = 30;
  SetModuleName = 31;
  GetModule = 32;
  SetModule = 33;
  GetModuleStringReferences = 34;
  SetModuleStringReferences = 35;
  GetModuleCount = 36;
  GetModuleFunctionName = 40;
  SetModuleFunctionName = 41;
  GetModuleFunctionAddress = 42;
  SetModuleFunctionAddress = 43;
  GetModuleFunction = 44;
  SetModuleFunction = 45;
  GetModuleFunctionStrRef = 46;
  SetModuleFunctionStrRef = 47;
  GetModuleFunctionCount = 48;
  GetActiveText = 50;
  SetActiveText = 51;
  GetActiveDisasmText = 52;       // (v9.4+)
  SetActiveDisasmText = 53;       // (v9.4+)
  SetActiveTextLine = 54;
  GetActiveModuleCoordinats = 55; // (v3.5+)
  GetVBDecompilerPath = 56;       // (v3.5+)
  GetModuleFunctionCode = 57;     // in "fast decompilation" mode (v3.5+)
  SetStatusBarText = 58;          // (v3.5+)
  GetFrxIconCount = 60;           // (v5.0+)
  GetFrxIconOffset = 61;          // (v5.0+)
  GetFrxIconSize = 62;            // (v5.0+)
  GetModuleFunctionDisasm = 70;         // (v9.4+)
  SetModuleFunctionDisasm = 71;         // (v9.4+) 
  UpdateAll = 100;
type
  TVBDPluginEngine = function(vlType :Integer; vlNumber :Integer; vlFnNumber :Integer; vlNewValue: PChar) :WideString; stdcall;

{$R *.res}

{
 Get some value from VB Decompiler structure
 vlPluginEngine - pointer to VB Decompiler CallBack function
 vlType - type of getted value (FormName, SubMain, ...)
 vlNumber - form or module index or zero
 vlFnNumber - function index (for 40-47 vlType's)
}
function GetValue(vlPluginEngine: pointer; vlType: integer; vlNumber: integer; vlFnNumber: integer): pchar;
var
  pStr      : pchar;
  wStr      : WideString;
  ptrString : pointer;
begin
  asm
    push pStr
    push vlFnNumber
    push vlNumber
    push vlType
    call vlPluginEngine;
    mov ptrString,eax
  end;
  pointer(wStr):=ptrString;
  result:=pchar(String(wStr));
end;

{
 Set some value to VB Decompiler structure
 vlPluginEngine - pointer to VB Decompiler CallBack function
 vlType - type of setted value (FormName, SubMain, ...)
 vlNumber - form or module index or zero
 vlFnNumber - function index (for 40-47 vlType's)
}
function SetValue(vlPluginEngine: pointer; vlType: integer; vlNumber: integer; vlFnNumber: integer; vlNewValue: pchar): pchar;
asm
  push vlNewValue
  push vlFnNumber
  push vlNumber
  push vlType
  call vlPluginEngine;
  mov result,eax
end;

{
 VBDecompilerPluginName fucntion (started on VB Decompiler load)
 VBDecompilerHWND - handle to VB Decompiler window
 RichTextBoxHWND - handle to VB Decompiler RichEdit window
 Buffer - buffer of 100 chars. Copy name of your plugin here
 Void - reserved value
}
procedure VBDecompilerPluginName(VBDecompilerHWND: integer; RichTextBoxHWND: integer; Buffer: pointer; Void: integer);export;stdcall;
var
  strName: pchar;
begin
  strName:='Test Delphi Plugin'#0;
  movememory(Buffer,strName,Length(strName));
end;


{
 VBDecompilerPluginLoad fucntion
 VBDecompilerHWND - handle to VB Decompiler window
 RichTextBoxHWND - handle to VB Decompiler RichEdit window
 Buffer - buffer of 100 chars. Copy name of your plugin here
 PluginEngine - VB Decompiler CallBack function
}
procedure VBDecompilerPluginLoad(VBDecompilerHWND: DWORD; RichTextBoxHWND: DWORD; Buffer: Pointer; PluginEngine: Pointer);export;stdcall;
var
 pStr: pchar;
 wStr: WideString;
begin
 // Get contents of VB project file
 wStr:=GetValue(PluginEngine,GetVBProject,0,0);
 // Change some data in VB project file
 pStr:=pchar(String(wStr)+#13#10+'This text added by plugin');
 // Set contents of VB project file
 wStr:=GetValue(PluginEngine,SetVBProject,0,0,pStr);
 //Load form
 frmMain:=TfrmMain.Create(Application);
 frmMain.Show;
 //Get text from active window in VB Decompiler
 wStr:=GetValue(PluginEngine,GetActiveText,0,0);
 pStr:=pchar(String(wStr));
 frmMain.txtVbProject.Text:=pStr;
 //Update all changed info
 wStr:=SetValue(PluginEngine,UpdateAll,0,0,pStr);
end;


{
 VBDecompilerPluginAuthor fucntion (used for detect author of plugin)
 VBDecompilerHWND - handle to VB Decompiler window
 RichTextBoxHWND - handle to VB Decompiler RichEdit window
 Buffer - buffer of 100 chars. Copy your name and mail here
 Void - reserved value
}
procedure VBDecompilerPluginAuthor(VBDecompilerHWND: integer; RichTextBoxHWND: integer; Buffer: pointer; Void: integer);export;stdcall;
var
  strName: pchar;
begin
  strName:='YourName, yourmail@somedomain.com'#0;
  movememory(Buffer,strName,Length(strName));
end;

Exports
  VBDecompilerPluginName,
  VBDecompilerPluginLoad;
  VBDecompilerPluginAuthor;

begin
end.
