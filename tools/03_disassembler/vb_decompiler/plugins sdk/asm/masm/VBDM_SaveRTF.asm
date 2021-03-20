; VB Decompiler Module
; Created by Jupiter
; Released under special license.
; You must always keep this reminder with sources.

comment ~
Purpose:
Saving active content from VB Decompiler (alias VB Dec) RichEdit control to RTF (Rich Text Format) document. Text formatting and highlighting preserved, text is saved directly from RichEdit control and remains untouched.
~


.386

.model	flat,stdcall
option	casemap:none

; ### Options
UNICODE	=0

; ### Includes
include	VBDM_SaveRTF.inc

.code

comment ~
	VB Dec calls this function to get name of module
Syntax
	VBDecompilerPluginName	Proto	hWndVBDec:HWND, hRichEd:HWND, sBuffer:LPSTR, lpResVBD1:DWORD

Parameters
	HWND	hWndVBDec	- handle to VB Decompiler window
	HWND	hRichEd		- handle to VB Decompiler RichEdit window
	LPSTR	sBuffer		- buffer of 100 chars. Copy name of your plugin here
	DWORD	lpResVBD1	- Reserved

Return Value
	VB Dec doesn't check return value ;)

Remarks
	Module name 100 chars max
~
VBDecompilerPluginName	Proc	hWndVBDec:HWND, hRichEd:HWND, sBuffer:LPSTR, lpResVBD1:DWORD
	MemCpy	sBuffer,o szModuleName,size szModuleName
	ret
VBDecompilerPluginName	EndP


comment ~
	VB Dec calls this function to execute module
Syntax
	VBDecompilerPluginLoad	Proto	hWndVBDec:HWND, hRichEd:HWND, sBuffer:LPSTR, VBDecModEngine:DWORD

Parameters
	HWND	hWndVBDec	- handle to VB Decompiler window
	HWND	hRichEd		- handle to VB Decompiler RichEdit window
	LPSTR	sBuffer		- buffer of 100 chars. Copy name of your plugin here
	DWORD	VBDecModEngine	- address of VB Decompiler CallBack function

Return Value
	VB Dec doesn't check return value ;)

Remarks
	Always check values returned by VB Dec! VB Dec can provide empty data.
~
VBDecompilerPluginLoad	Proc	hWndVBDec:HWND, hRichEd:HWND, sBuffer:LPSTR, VBDecModEngine:DWORD
Local	pStr		:LPSTR
Local	pFileName	:LPSTR

	push	edi
	; Store address of VB Decompiler CallBack function
	mov	edi, VBDecModEngine
	mov	VBDecGate, edi
	; Get content of active window
	xor	eax, eax
	invoke	GetVBDecVal, VBD_GetActiveText, eax, eax
	mov	pStr, eax
	ifz	@@FreeRes

	; Allocate memory for file name
	stra	pFileName, MAX_PATH, addr szDefFileName
	; Save content of RichEdit control to file
	invoke	SaveAsRTF, hWndVBDec, hRichEd, pFileName 
	.If eax
		StrLen	pStr
		.If	eax > 2	; Else empty
			add	eax, sizeof szContentSaved + 16		; OldStrSize + SampleStrSize + ExtraBytes 
			push	eax
			invoke	GetProcessHeap
			; ReAllocate more memory for string
			_call	HeapReAlloc,eax,HEAP_ZERO_MEMORY,pStr
			mov	pStr, eax
			; Append "Content successfully saved." to active text
			invoke	lstrcat,eax,addr szContentSaved
			
			; Set new content of 'Project' window
			xor	eax, eax
			; edi - VBDecModEngine
			mSetVBDecVal	edi, pStr, VBD_SetVBProject,eax,eax
			; Update all
			xor	eax, eax
			mSetVBDecVal	edi, pStr, VBD_UpdateAll,eax,eax
;			lea	eax, szContentSaved
		.EndIf
;	.Else
;		lea	eax, szContentNotSaved
	.EndIf

	@@FreeRes:
	; Free resources
	strd	pStr
	strd	pFileName
	@@Done:
	pop	edi
	ret
VBDecompilerPluginLoad	EndP


comment ~
; Free resources
FreeRes	Proc
	
	ret
FreeRes	EndP
~
DllEntry proc hInstance:HINSTANCE, reason:DWORD, reserved1:DWORD
	m2m	hInstLib, hInstance
	return	TRUE
DllEntry	EndP
End DllEntry
