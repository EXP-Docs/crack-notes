					;############################################################
					;############## RLP v0.7 PLUGIN FOR ImportREC ###############
					;################ by +NCR/CRC! [ReVeRsEr] ###################
					;################### CracksLatinoS! 2006 ####################
					;#################### @: reversing_ar@yahoo.com.ar ##########
					;############################################################



.386
.model flat, stdcall
option casemap: none

include RLP07.inc

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
			cmp		byte ptr[eax],068h 
			jnz		noestabien
			cmp		byte ptr ds:[eax+5],81h
			jnz		noestabien
			cmp		byte ptr ds:[eax+6],04h
			jnz		noestabien
			cmp 	byte ptr ds:[eax+7],24h
			jnz		noestabien
			;reparamos la entrada
			mov		eax,dwToTrace			
			mov		eax,dword ptr[eax+1]
			mov 	ecx,dwToTrace
			mov 	ecx,dword ptr ds:[ecx++8]
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