@echo off

if exist EXC.obj del EXC.obj
if exist EXC.dll del EXC.dll

C:\masm32\bin\ml /c /coff EXC.asm

C:\masm32\bin\Link /SUBSYSTEM:WINDOWS /DLL /DEF:EXC.def EXC.obj

dir EXC.*
pause
