;  FASM PDK for VB\DE-Decompiler by GPcH
;  Updated!
format PE GUI 4.0 dll
entry Dllep
include '%fasminc%\win32wx.inc'

section '.dedec' readable writeable executable

GetVBProject		    = 1
SetVBProject		    = 2
GetFileName		    = 3     ;(v3.5+)
IsNativeCompilation	    = 4     ;(v3.5+)
ClearAllBuffers 	    = 5     ;need if your plugin decompile new language and need to clear all structures (v3.9+)
GetCompiler		    = 6     ;1 - vb, 2 - .net, 3 - delphi, 4 - unknown (v3.9+)
IsPacked		    = 7     ;1 - packed, 0 - not packed (v3.9+)
SetStackCheckBoxValue	    = 8     ;0 - unchecked, 1 - checked (v3.9+)
SetAnalyzerCheckBoxValue    = 9     ;0 - unchecked, 1 - checked (v3.9+)
GetVBFormName		    = 10
SetVBFormName		    = 11
GetVBForm		    = 12
SetVBForm		    = 13
GetSubMain		    = 20
SetSubMain		    = 21
GetModuleName		    = 30
SetModuleName		    = 31
GetModule		    = 32
SetModule		    = 33
GetModuleStringReferences   = 34
SetModuleStringReferences   = 35
GetModuleFunctionName	    = 40
SetModuleFunctionName	    = 41
GetModuleFunctionAddress    = 42
SetModuleFunctionAddress    = 43
GetModuleFunction	    = 44
SetModuleFunction	    = 45
GetModuleFunctionStrRef     = 46
SetModuleFunctionStrRef     = 47
GetActiveText		    = 50
SetActiveText		    = 51
GetActiveDisasmText         = 52;   ;(v9.4+)
SetActiveDisasmText         = 53;   ;(v9.4+)
SetActiveTextLine	    = 54
GetActiveModuleCoordinats   = 55    ;(v3.5+)
GetVBDecompilerPath	    = 56    ;(v3.5+)
GetModuleFunctionCode	    = 57    ;in "fast decompilation" mode
SetStatusBarText	    = 58    ;(v3.5+)
GetFrxIconCount             = 60    ;(v5.0+)
GetFrxIconOffset            = 61    ;(v5.0+)
GetFrxIconSize              = 62    ;(v5.0+)
GetModuleFunctionDisasm     = 70;   ;(v9.4+)
SetModuleFunctionDisasm     = 71;   ;(v9.4+)
UpdateAll		    = 100

 MAINDIALOG  = 111
 EXITB	     = 101
 ABOUTB      = 102
 SAVEB	     = 103
 RTBOX	     = 104
 GETB	     = 105
 STAT	     = 110

hinst	     dd 0
hinstDLL     dd 0
hWndVBDec    dd 0
cCaption     du 'FASM Plugin Template',0
cMessage     du 'FASM PDK for VB\DE-Decompiler',0ah,0dh
	     du 'Special thnx to GPcH for this cool program ;)',0ah,0dh,0ah,0dh
	     du 'Hello to all Hard FASM coders (you know you are ;) )',0ah,0dh
	     du 'Thnx to VAD87 for testing!',0ah,0dh,0ah,0dh,0ah,0dh
	     du 'Developed by mushr00m Copyright (C)   2008',0ah,0dh,0
pStr	     dd 0
wStr	     dd 0
pCon	     dd 0
pModN	     dd 0
hfile	     dd 0
fBuffer      dd 0
stext	     dd 0
autorzn      du 'mushr00m ;)',0
autorzn_size =	$ - autorzn
StrFileName  du 'decompiled.rtf',0
szModuleName db 'FASM plugin',0
siz	     =	$ - szModuleName
;============================================================================
proc Dllep hinstDLL,fdwReason,lpvReserved
  push	  [hinstDLL]
  pop	  [hinst]
  invoke  InitCommonControls
  xor eax, eax
  inc eax
  ret
endp
;============================================================================
proc DlgProc hDlg,uMsg,wParam,lparam
  push ebx esi edi
  cmp	  [uMsg],WM_INITDIALOG
  je	  wminitdlg
  cmp	  [uMsg],WM_COMMAND
  je	  wmcommand
  cmp	  [uMsg],WM_CLOSE
  je	  wmclose
  xor	  eax,eax
  jmp	  return

wmcommand:
  cmp	  [wParam],BN_CLICKED shl 16 or EXITB
  je	  wmclose
  cmp	  [wParam],BN_CLICKED shl 16 or ABOUTB
  je	  wmabout
  cmp	  [wParam],BN_CLICKED shl 16 or SAVEB
  je	  wmsavef
  cmp	  [wParam],BN_CLICKED shl 16 or GETB
  je	  wmgettext
wminitdlg:
  invoke  SetDlgItemTextW,[hDlg],STAT,[pStr]
  jmp	  return
wmclose:
  invoke  EndDialog,[hDlg],0
  jmp	  return
wmgettext:
  invoke  SetDlgItemTextW,[hDlg],RTBOX,[pCon]
  jmp	  return
wmsavef:
  invoke  CreateFileW,StrFileName,GENERIC_READ+GENERIC_WRITE,FILE_SHARE_READ+FILE_SHARE_WRITE,NULL,CREATE_ALWAYS,80h,0
  mov	  [hfile],eax
  invoke  lstrlenW,[pCon]
  mov	  [stext], eax
  invoke  LocalAlloc, LMEM_FIXED or LMEM_ZEROINIT,[stext]
  mov	  edx, fBuffer
  mov	  edi, eax
  invoke  WideCharToMultiByte, CP_ACP, 0,[pCon], -1, edi,[stext], 0, 0 ;UNICODE -> ANSI
  invoke  _lwrite,[hfile],edi,[stext]				       ;save to file "decompiled.rtf"
  invoke  CloseHandle,[hfile]
  jmp	  return
wmabout:
  invoke  MessageBoxW,[hWndVBDec],cMessage,cCaption,MB_OK + MB_ICONINFORMATION+MB_TASKMODAL
  jmp	  return
return:
  pop	  edi esi ebx
  ret
endp
;============================================================================

proc VBDecompilerPluginLoad hWndVBDec, hRichEd, sBuffer, PluginEngine

  stdcall [PluginEngine],GetVBProject,0,0,pStr
  mov	  [wStr],eax

  stdcall GetValue,[PluginEngine],GetFileName,0,0	       ;
  mov	  [pStr],eax					       ; pStr <- Path of file

  stdcall GetValue,[PluginEngine],GetActiveTextAsRichText,0,0  ;
  mov	 [pCon], eax					       ; pCon <- Pointer of content

  stdcall GetValue,[PluginEngine],GetModuleName,0,0	       ;
  mov	  [pModN],eax					       ; GetModuleName

  invoke  DialogBoxParamA,[hinst],MAINDIALOG,[hWndVBDec],DlgProc,0
  ret
endp
;============================================================================
proc VBDecompilerPluginName hWndVBDec, hRichEd,sBuffer, lpResVBD1
  stdcall memcpy,[sBuffer],szModuleName,siz
  ret
endp
;============================================================================
proc VBDecompilerPluginAuthor hWndVBDec,hRichEd,sBuffer,hekz
  stdcall memcpy,[sBuffer],autorzn,autorzn_size
  ret
endp
;============================================================================
proc GetValue vlPluginEngine,vlType,vlNumber,vlFnNumber
  push pStr
  push [vlFnNumber]
  push [vlNumber]
  push [vlType]
  call [vlPluginEngine]
  mov  [wStr],eax
  ret
endp
;============================================================================
proc SetValue vlPluginEngine,vlType,vlNumber,vlFnNumber,vlNewValue
  push [vlNewValue]
  push [vlFnNumber]
  push [vlNumber]
  push [vlType]
  call [vlPluginEngine]
  ret
endp
;============================================================================
proc memcpy uses esi edi,dest,src,len
  mov edi,[dest]
  mov esi,[src]
  mov ecx,[len]
  mov edx,ecx
  shr ecx,2
  cld
  rep movsd
  mov ecx,edx
  and ecx,3
  rep movsb
  ret
endp
;============================================================================

section '.edata' export data readable

  export 'DecompilerPlugin.dll',\
       VBDecompilerPluginLoad,'VBDecompilerPluginLoad',\
       VBDecompilerPluginName,'VBDecompilerPluginName',\
       VBDecompilerPluginAuthor,'VBDecompilerPluginAuthor'

section '.idata' import data readable writeable

  library kernel32,'KERNEL32.DLL',\
	  user32,'USER32.DLL',\
	  comctl32,'COMCTL32.DLL'
     import_kernel32
     import_comctl32
     import_user32
section '.rlc' fixups data discardable

section '.rsrc' resource data readable

 directory RT_DIALOG,Dlog

 resource Dlog,MAINDIALOG,LANG_ENGLISH+SUBLANG_ENGLISH_US,plug_dlg

 dialog plug_dlg, 'FASM Plugin PDK',0,0,258,193,WS_CAPTION+WS_POPUP+WS_MINIMIZEBOX+WS_SYSMENU+DS_CENTER,WS_EX_ACCEPTFILES+WS_EX_WINDOWEDGE,0,'Verdana',9
   dialogitem 'STATIC','',STAT,3,3,253,8,SS_LEFT+WS_CHILD+WS_VISIBLE
   dialogitem 'BUTTON','&Save file',SAVEB,3,176,53,15,BS_PUSHBUTTON+WS_CHILD+WS_VISIBLE+WS_TABSTOP
   dialogitem 'BUTTON','&Get text',GETB,70,176,53,15,BS_PUSHBUTTON+WS_CHILD+WS_VISIBLE+WS_TABSTOP
   dialogitem 'BUTTON','&About',ABOUTB,136,176,53,15,BS_PUSHBUTTON+WS_CHILD+WS_VISIBLE+WS_TABSTOP
   dialogitem 'BUTTON','&Exit',EXITB,202,176,53,15,BS_PUSHBUTTON+WS_CHILD+WS_VISIBLE+WS_TABSTOP
   dialogitem 'RichEdit','',RTBOX,4,14,250,159,WS_VISIBLE+WS_BORDER+WS_VSCROLL+WS_HSCROLL+ES_AUTOHSCROLL+ES_AUTOVSCROLL+ES_MULTILINE+ES_READONLY+WS_TABSTOP

 enddialog
