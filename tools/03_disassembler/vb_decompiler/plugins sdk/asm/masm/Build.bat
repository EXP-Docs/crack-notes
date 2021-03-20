@Echo off
Set Project=VBDM_SaveRTF
Set Res=%Project%
Set Ext=dll
Set AsmDir=\masm32
Set OutPath=.\
Set OutName=SaveRTF
Set Out=/OUT:%OutPath%%OutName%.%Ext%"
Set LinkOpt=/DLL /SUBSYSTEM:WINDOWS /RELEASE /VERSION:4.0 /MACHINE:X86 /OPT:NOWIN98 
Set Stub=/STUB:Stub.exe
Set Stub=
Set Cmnt=
Set Exp=/Def:%Project%.def

@echo [i] Creating %Project% project ...
@echo.

:CleanBefore
if exist %Project%.obj del %Project%.obj
if exist %Project%.%Ext% del %Project%.%Ext%

if exist %Res%.rc  GoTo CompileRc
rem if exist %Res%.res goto CompileAsm
Goto CompileAsm
GoTo LinkRes

:CompileRc
@echo [i] Compiling resources ...
%AsmDir%\Bin\rc /i%AsmDir%\include %Res%.rc
if not exist %Res%.res goto ResErr

:CompileAsm
@echo.
if not exist %Project%.asm goto LinkResNoAsm
@echo [i] Assembling %Project%.asm ...
%AsmDir%\Bin\ml /nologo /c /coff /I%AsmDir%\include %Project%.asm
if not exist %Project%.obj goto AsmErr

:Link
@echo.
@echo [i] Linking ...
if not exist %Res%.res goto LinkNoRes
%AsmDir%\Bin\link /nologo /LIBPATH:%AsmDir%\Lib %Cmnt% %Exp% %LinkOpt% %Stub% %Project%.obj %Res%.res %Out%
GoTo CheckLink

:LinkNoRes
%AsmDir%\Bin\link /nologo /LIBPATH:%AsmDir%\Lib %Cmnt% %Exp% %LinkOpt% %Stub% %Project%.obj %Out%
GoTo CheckLink

:LinkResNoAsm
@echo [i] Linking resource DLL ...
%AsmDir%\Bin\link /nologo %Cmnt% %Exp% %LinkOpt% %Stub% %Res%.res %Out%
GoTo CheckLink

:CheckLink
if not exist %OutPath%%OutName%.%Ext% goto LinkErr
Goto CleanAfter

:ResErr
@echo.
@echo [x] Resources compilation: Error
@Pause
Goto End

:AsmErr
@echo.
@echo [x] Assemler compilation: Error
@Pause
Goto End

:LinkErr
@echo.
@echo [x] Linker error
@Pause
Goto End

:CleanAfter
@echo.
if exist %OutPath%%OutName%.exp del %OutPath%%OutName%.exp
@echo [i] Done.
Goto End

:RunExe
@echo.
if not exist %Project%.exe GoTo End
@echo [i] Executing %Project%.exe ...
@%Project%.exe
rem Cls

:End