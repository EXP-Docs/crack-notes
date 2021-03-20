; VBDecMod.inc

Include windows.inc
include	JMacros.asm

incl	kernel32, user32, ComDlg32

; VB Decompiler
include	..\AsmPDK\VBDecMod.inc
include	..\AsmPDK\VBDecMod.asm

; SaveRTF
include	SaveRTF.asm

; ### Proto
DlgProc	Proto	hWnd:HWND,iMsg:DWORD,wParam:WPARAM, lParam:LPARAM

; ### Some constants
CrLf			equ	13, 10
o			equ	offset

.data

szAppNameFull		db	"VB Decompiler - SaveRTF module [Assembler]",0

; Module name - this name appears in VBDec menu
szModuleName		db	"Save active text as &RTF",0

; Messages
szContentSaved		db	CrLf,"Content successfully saved.",0
szContentNotSaved	db	CrLf,"Content not saved",0

; Default file name for RTF
szDefFileName		db	"VBDecText.rtf",0

.data?
hInstLib		HINSTANCE	?
