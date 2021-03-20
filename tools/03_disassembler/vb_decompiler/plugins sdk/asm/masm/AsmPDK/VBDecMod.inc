; VBDecMod.inc
; Constants, macros and definitions for VB Decompiler operations
; Created by Jupiter
; Released under special license.
; You must always keep this reminder with sources.

;.const
; Get/Set functions - vlType
VBD_GetVBProject		= 1
VBD_SetVBProject		= 2
VBD_GetFileName			= 3     ;(v3.5+)
VBD_IsNativeCompilation		= 4     ;(v3.5+)
VBD_ClearAllBuffers 	        = 5     ;need if your plugin decompile new language and need to clear all structures (v3.9+)
VBD_GetCompiler		        = 6     ;1 - vb, 2 - .net, 3 - delphi, 4 - unknown (v3.9+)
VBD_IsPacked		        = 7     ;1 - packed, 0 - not packed (v3.9+)
VBD_SetStackCheckBoxValue       = 8     ;0 - unchecked, 1 - checked (v3.9+)
VBD_SetAnalyzerCheckBoxValue    = 9     ;0 - unchecked, 1 - checked (v3.9+)
VBD_GetVBFormName		= 10
VBD_SetVBFormName		= 11
VBD_GetVBForm			= 12
VBD_SetVBForm			= 13
VBD_GetVBFormCount		= 14
VBD_GetSubMain			= 20
VBD_SetSubMain			= 21
VBD_GetModuleName		= 30
VBD_SetModuleName		= 31
VBD_GetModule			= 32
VBD_SetModule			= 33
VBD_GetModuleStringReferences	= 34
VBD_SetModuleStringReferences	= 35
VBD_GetModuleCount		= 36
VBD_GetModuleFunctionName	= 40
VBD_SetModuleFunctionName	= 41
VBD_GetModuleFunctionAddress	= 42
VBD_SetModuleFunctionAddress	= 43
VBD_GetModuleFunction		= 44
VBD_SetModuleFunction		= 45
VBD_GetModuleFunctionStrRef	= 46
VBD_SetModuleFunctionStrRef	= 47
VBD_GetModuleFunctionCount	= 48
VBD_GetActiveText		= 50
VBD_SetActiveText		= 51
VBD_GetActiveDisasmText         = 52;   ;(v9.4+)
VBD_SetActiveDisasmText         = 53;   ;(v9.4+)
VBD_SetActiveTextLine		= 54
VBD_GetActiveModuleCoordinats	= 55    ;(v3.5+)
VBD_GetVBDecompilerPath		= 56    ;(v3.5+)
VBD_GetModuleFunctionCode	= 57    ;in "fast decompilation" mode
VBD_SetStatusBarText	        = 58    ;(v3.5+)
VBD_GetFrxIconCount             = 60    ;(v5.0+)
VBD_GetFrxIconOffset            = 61    ;(v5.0+)
VBD_GetFrxIconSize              = 62    ;(v5.0+)
VBD_GetModuleFunctionDisasm     = 70;   ;(v9.4+)
VBD_SetModuleFunctionDisasm     = 71;   ;(v9.4+)
VBD_UpdateAll			= 100

; ### Prototypes
; Main exported
VBDecompilerPluginName	Proto	hWndVBDec:HWND, hRichEd:HWND, sBuffer:LPSTR, lpResVBD1:DWORD
VBDecompilerPluginLoad	Proto	hWndVBDec:HWND, hRichEd:HWND, sBuffer:LPSTR, VBDecModEngine:DWORD
; Additional, internal
GetVBDecVal	Proto	vlType:DWORD, vlNumber:DWORD, vlFnNumber:DWORD
SetVBDecVal	Proto	pStr:LPSTR, vlType:DWORD, vlNumber:DWORD, vlFnNumber:DWORD

.data?
VBDecGate	dd	?	; VB Decompiler Plugin Engine CallBack function
