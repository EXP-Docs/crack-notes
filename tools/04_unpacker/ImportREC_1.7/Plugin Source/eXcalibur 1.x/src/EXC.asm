
; ImpRec Plugin: Excalibur
; -----------------------------------------------------------

    .386
    .model flat, stdcall
    option casemap :none   ; case sensitive

; -----------------------------------------------------------

    include c:\masm32\include\windows.inc
    include c:\masm32\include\user32.inc
    include c:\masm32\include\kernel32.inc

    includelib c:\masm32\lib\user32.lib
    includelib c:\masm32\lib\kernel32.lib

	include hde.inc
	includelib hde.lib

; -----------------------------------------------------------

.data

hde_struc  HDE_STRUCT <>

.code

; -----------------------------------------------------------

LibMain proc hInstDLL:DWORD, reason:DWORD, unused:DWORD

    ret

LibMain Endp

; Exported function to use
;
; Parameters:
; -----------
; <hFileMap>    : HANDLE of the mapped file
; <dwSizeMap>   : Size of that mapped file
; <dwTimeOut>   : TimeOut of ImpREC in Options
; <dwToTrace>   : Pointer to trace (in VA)
; <dwExactCall> : EIP of the exact call (in VA)
;
; Returned value (in eax):
; ------------------------
; Use a value greater or equal to 200. It will be shown by ImpREC if no output were created

; -----------------------------------------------------------

Trace proc hFileMap:DWORD, dwSizeMap:DWORD, dwTimeOut:DWORD, dwToTrace:DWORD, dwExactCall:DWORD

    LOCAL dwPtrOutput : DWORD
    LOCAL dwErrorCode : DWORD

    push ebx

    ; Map the view of the file (3rd parameter : 6 = FILE_MAP_READ | FILE_MAP_WRITE)
    invoke MapViewOfFile, hFileMap, 6, 0, 0, 0
    test eax, eax
    jnz map_ok

    mov eax, 201                ; Can't map the view
    pop ebx
    ret

map_ok:

    mov dwPtrOutput, eax                ; Get the returned address of the mapped file

    cmp dwSizeMap, 4
    jae map_ok2;

    mov dwErrorCode, 203                ; Invalid map size
    jmp end2

map_ok2:

    ; Check if the given pointer to trace is a valid address
    ; -------------------------------------------------------

    mov ebx, dwToTrace
    invoke IsBadReadPtr, ebx, 4
    test eax, eax
    jz ptr_ok1

    mov dwErrorCode, 205                ; Invalid pointer
    jmp end2

ptr_ok1:

    ; Check if we have a PUSH XXXXXXXX + XOR DWORD [ESP], XXXXXXXX
    ; -------------------------------------------

    cmp byte ptr[ebx], 068h
    jnz no_xor
    cmp word ptr[ebx+5], 3481h
    jnz no_xor
    cmp byte ptr[ebx+7], 024h
    jnz no_xor

    ; -------------------------------------------

	mov eax, [ebx+1]
	xor eax, [ebx+8]
	mov ebx, eax

no_xor:
	xor ecx, ecx

find_e9:

	invoke hde_disasm, ebx, offset hde_struc  ; returns len in eax
	cmp hde_struc.opcode, 0E9h
	je get_offset
	add ebx, eax
	cmp hde_struc.opcode, 0EBh
	jne cmd
	movzx eax, hde_struc.rel8
	add ebx, eax
	xor eax, eax
  cmd:
	add ecx, eax
	jmp find_e9


get_offset:
	mov eax, hde_struc.rel32
	add ebx, eax
	add ebx, 5
	sub ebx, ecx

    ; Check if found address is a valid one
    ; -------------------------------------------

    invoke IsBadReadPtr, ebx, 4
    test eax, eax
    jz ptr_ok2

    mov dwErrorCode, 205                ; Invalid pointer
    jmp end2

ptr_ok2:

    ; Now write in the mapped file the found pointer
    ; ----------------------------------------------

    mov eax, dwPtrOutput;
    mov [eax], ebx;

end_ok:

    mov dwErrorCode, 200                ; All seems to be OK

end2:
    invoke UnmapViewOfFile, dwPtrOutput ; Unmap the view
    invoke CloseHandle, hFileMap;       ; Close the handle of the mapped file
    mov eax, dwErrorCode                ; Set error code as returned value

    pop ebx
    ret

Trace endp

; -----------------------------------------------------------

End LibMain
