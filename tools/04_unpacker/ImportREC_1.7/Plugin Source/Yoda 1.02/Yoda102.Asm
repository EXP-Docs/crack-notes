					;############################################################
					;############## YodaProtector v1.2 PLUGIN FOR ImportREC #####
					;################ by +NCR/CRC! [ReVeRsEr] ###################
					;################### CracksLatinoS! 2006 ####################
					;#################### @: reversing_ar@yahoo.com.ar ##########
					;############################################################



.386
.model flat, stdcall
option casemap: none

include Yoda102.inc

.code

LibMain proc hInstDLL:DWORD, reason:DWORD, unused:DWORD
	
	ret

LibMain endp

Trace proc hFileMap:DWORD, dwSizeMap:DWORD, dwTimeOut:DWORD, dwToTrace:DWORD, dwExactCall:DWORD
	LOCAL comienzomap:DWORD
	
	pushad
	
	.if dwSizeMap < 4
		invoke	CloseHandle,hFileMap		
		popad
		mov		eax,201
		ret
	.endif

		
	invoke	MapViewOfFile,hFileMap,6,0,0,0
	.if eax==NULL  
		invoke	CloseHandle,hFileMap
		popad
		mov		eax,202
		ret
	.else		    
		mov		comienzomap,eax      
		
		invoke	IsBadReadPtr,dwToTrace,4
		.if eax != 0       
			invoke	UnmapViewOfFile,comienzomap
			invoke	CloseHandle,hFileMap
			popad
			mov		eax,203
			ret
		.else              
			mov		eax,dwToTrace					
			cmp		byte ptr[eax],0E9h 
			jnz		noestabien
			mov		eax,dwToTrace			
			mov		eax,dword ptr[eax+1]
			mov 	ecx,dwToTrace
			add		ecx,5
			add 	eax,ecx 
			mov		ebx,comienzomap
			mov		dword ptr[ebx],eax
			
			finexitoso: 
			invoke	UnmapViewOfFile,comienzomap
			invoke	CloseHandle,hFileMap
			popad
			mov		eax,200
			ret			
			
			noestabien:
			invoke	UnmapViewOfFile,comienzomap
			invoke	CloseHandle,hFileMap
			popad
			mov		eax,204
			ret
		.endif
		
	.endif
	
	
	
	ret

Trace endp


end LibMain