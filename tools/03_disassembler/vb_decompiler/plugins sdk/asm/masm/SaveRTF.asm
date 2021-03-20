; SaveRTF.asm
; Save RTF to file
; by Jupiter

SaveRTF		Proto	hRichEd:HWND, sFileRTF:LPSTR
SaveAsRTF	Proto	hParent:HWND, hRichEd:HWND, lpFileName:LPSTR
StreamOutProc	Proto	hFile:DWORD,pBuffer:LPSTR, NumBytes:DWORD, pBytesWritten:DWORD

.data
szFilterRTF		db	"Rich Text Format (*.rtf)", 0, "*.rtf", 0, 0
szDefExt		db	"rtf",0

OpenFN_Def_SaveFlag	equ	OFN_PATHMUSTEXIST or OFN_LONGNAMES or OFN_EXPLORER or OFN_HIDEREADONLY or OFN_OVERWRITEPROMPT


.code
StreamOutProc	Proc	hFile:DWORD,pBuffer:LPSTR, NumBytes:DWORD, pBytesWritten:DWORD
	invoke WriteFile,hFile,pBuffer,NumBytes,pBytesWritten,0
	xor	eax,1
	ret
StreamOutProc	EndP

comment ~
	Save content of RichEdit control to file
Syntax
	SaveRTF		Proto	hRichEd:HWND, sFileRTF:LPSTR
Parameters
[IN]	HWND	hRichEd		- handle of RichEdit window
[IN]	LPSTR	sFileRTF	- file name

Return Values
	If the function succeeds, the return value is nonzero.
~
SaveRTF	Proc	hRichEd:HWND, sFileRTF:LPSTR
Local	EditStream	:EDITSTREAM
Local	hFile		:DWORD

	; Save RTF
	invoke	CreateFile,sFileRTF,GENERIC_WRITE,FILE_SHARE_READ,NULL,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,0
	iff	@@Done
	mov	hFile,eax
	push	esi
	lea	esi,EditStream
	assume	esi: ptr EDITSTREAM
	mov	[esi].dwCookie,eax
	mov	[esi].pfnCallback,o StreamOutProc
	invoke	SendMessage,hRichEd,EM_STREAMOUT,SF_RTF,esi
	invoke	CloseHandle,hFile
	assume	esi: nothing
	pop	esi
	@@Done:
	ret
SaveRTF	EndP


; Ask before saving
SaveAsRTF	Proc	hParent:HWND, hRichEd:HWND, lpFileName:LPSTR
Local	OpenFN	:OPENFILENAME
	lea	eax, OpenFN
	push	eax
	invoke	RtlZeroMemory,eax,sizeof OPENFILENAME
	pop	eax
	assume	eax: ptr OPENFILENAME
	mov	[eax].lStructSize,sizeof OPENFILENAME
	m2m	[eax].hInstance, hInstLib	;eax
	m2m	[eax].hwndOwner, hParent
	mov     [eax].lpstrFilter, offset szFilterRTF
	m2m     [eax].lpstrFile, lpFileName
	mov     [eax].nMaxFile, MAX_PATH
	mov     [eax].lpstrTitle, NULL
	mov     [eax].lpstrDefExt, offset szDefExt
	mov	[eax].Flags, OpenFN_Def_SaveFlag
	assume	eax: nothing
	invoke	GetSaveFileName, eax
	.If eax
		invoke	SaveRTF, hRichEd, lpFileName
	.EndIf 
	ret
SaveAsRTF	EndP
