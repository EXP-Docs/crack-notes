; VBDecMod.asm
; Code and macros for VB Decompiler operations
; Created by Jupiter
; Released under special license.
; You must always keep this reminder with sources.

; ### Global variables:
; VBDecGate - pointer to VB Decompiler CallBack function

; ### Prototypes
; Declared in VBDecMod.inc

.code
; ### Functions

comment ~
GetVBDecVal
	Get some value from VB Decompiler structure
	
Syntax
	GetVBDecVal	Proto	vlType:DWORD, vlNumber:DWORD, vlFnNumber:DWORD

Parameters
	DWORD	vlType		- type of value to get (FormName, SubMain, ...)
	DWORD	vlNumber	- form|module index or zero
	DWORD	vlFnNumber	- function index (for 40-47 vlType's)

Return Value
	Pointer to allocated memory with requested data in ANSI, not Unicode.

Remarks
	To free a block of memory allocated use the HeapFree function or strd macros.

Example:
	invoke	GetVBDecVal, VBD_GetVBProject, 0, 0
~

GetVBDecVal	Proc	vlType:DWORD, vlNumber:DWORD, vlFnNumber:DWORD
Local	pStr		:DWORD
Local	pVBDResult	:DWORD
Local	dBufSize	:DWORD
	mov	eax, VBDecGate
	test	eax, eax
	jz	Done
	push	edi
	mov	edi, eax		; VBDecGate in edi
	invoke	IsBadCodePtr, eax
	.If	eax
		;( must be zero
		Bad:
		pop	edi
		xor	eax, eax
		jmp	Done
	.EndIf
	_call	edi, vlType, vlNumber, vlFnNumber, pVBDResult
	mov	pVBDResult, eax
	ifz	Bad
	mov	edi, WideCharToMultiByte
	; Get size of required buffer
	xor	eax, eax	; for NULL
	_call	edi, CP_ACP, 0, pVBDResult, -1, eax, eax, eax, eax
	; eax contains required size, in bytes, for a buffer that can receive the translated string.
	add	eax, 4		; Add extra bytes for safety
	mov	dBufSize, eax
	; Allocate buffer
	stra	pStr, dBufSize
	xor	eax, eax	; for NULL
	; Convert Unicode to ASCII
	_call	edi, CP_ACP, 0, pVBDResult, -1, pStr, dBufSize, eax, eax
;	invoke	WideCharToMultiByte, CP_ACP, 0, pVBDResult, -1, pStr, dBufSize, NULL, NULL
	pop	edi
	mov	eax, pStr
	Done:
	ret
GetVBDecVal endp

comment ~
mGetVBDecVal
	Get some value from VB Decompiler structure
	
Syntax
	mGetVBDecVal	Macro	pVBDecGate:DWORD, pVBDResult:DWORD, vlType:DWORD, vlNumber:DWORD, vlFnNumber:DWORD

Parameters
	DWORD	pVBDecGate	- address of VB Decompiler CallBack function
	LPSTR	pVBDResult	- buffer
	DWORD	vlType		- type of value to get (FormName, SubMain, ...)
	DWORD	vlNumber	- form|module index or zero
	DWORD	vlFnNumber	- function index (for 40-47 vlType's)

Return Value
	Pointer to Unicode data.

Remarks
	No additional checks perforemed. Return value is pointer to UNICODE data!

Example:
	mGetVBDecVal	edi, pStr, VBD_GetVBProject, 0, 0
~
mGetVBDecVal	Macro	pVBDecGate, pVBDResult, vlType, vlNumber, vlFnNumber
	_call	pVBDecGate, vlType, vlNumber, vlFnNumber, pVBDResult
EndM

comment ~
SetVBDecVal
	Set some value to VB Decompiler structure
	
Syntax
	SetVBDecVal	Proto	pStr:LPSTR, vlType:DWORD, vlNumber:DWORD, vlFnNumber:DWORD

Parameters
	LPSTR	pStr		- ptr to str to be set
	DWORD	vlType		- type of value to set (FormName, SubMain, ...)
	DWORD	vlNumber	- form|module index or zero
	DWORD	vlFnNumber	- function index (for 40-47 vlType's)

Return Value
	Pointer to allocated memory with requested data.

Remarks
	To free a block of memory allocated use the HeapFree function.

Example:
	invoke	SetVBDecVal, pStr, VBD_SetVBProject, 0, 0

~
SetVBDecVal	Proc	pStr:LPSTR, vlType:DWORD, vlNumber:DWORD, vlFnNumber:DWORD
	mov	eax, VBDecGate
	test	eax, eax	; Check 
	jz	Done
	push	edi
	mov	edi, eax
	invoke	IsBadCodePtr, eax
	.If eax		;( must be zero
		pop	edi
		jmp	Done
	.EndIf
	_call	edi, vlType, vlNumber, vlFnNumber, pStr
	pop	edi
	Done:
	ret
SetVBDecVal	EndP

; Macro similar to SetVBDecVal function, but no additional checks
; pVBDecGate - pointer to VB Decompiler CallBack function
; Other parameters similar to SetVBDecVal function
mSetVBDecVal	Macro pVBDecGate, pStr, vlType, vlNumber, vlFnNumber
	_call	pVBDecGate, vlType, vlNumber, vlFnNumber, pStr
EndM

comment !
EnumerateForms	Proc
	invoke	GetVBDecVal, VBD_GetVBFormName, 1, eax
	mov	pStr, eax
	test	eax, eax 
	jz	Done
	
	Done:
	ret
EnumerateForms endp
!
