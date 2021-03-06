					;############################################################
					;######## Morphine IAT Repair PLUGIN for ImportREC ##########
					;################ by +NCR/CRC! [ReVeRsEr] ###################
					;################### Seek and Destroy 2006 ##################
					;#################### @: reversing_ar@yahoo.com.ar ##########
					;############################################################
.386
.model flat, stdcall
option casemap: none

include morphine.inc

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
			cmp		byte ptr[eax],06ah ;dwToTrace contiene la direccion donde se encuentra la redireccion	
			jnz		noestabien
			cmp		byte ptr ds:[eax+1],00h ;con los dos primeros CMP nos fijamos que haya un PUSH 0
			jnz		noestabien
			cmp		byte ptr ds:[eax+2],50h ;comprobamos que este el PUSH EAX
			jnz		noestabien
			cmp 	byte ptr ds:[eax+3],0A1h ;y aqui el MOV EAX,DWORD PTR DS:[xxxxxxxx]
			jnz		noestabien
			;reparamos la entrada
			mov		eax,dwToTrace
			mov 	ecx,eax			
			mov		eax,dword ptr[eax+4] ;tomamos la primer constante 
			mov 	eax,dword ptr ds:[eax]
			mov 	ecx,dword ptr ds:[ecx+9] ;aca obtenemos la segunda constante
			add 	eax,ecx ;sumamos ambos valores para obtener la direccion de la funcion
			mov 	ebx,comienzomap
			mov		dword ptr[ebx],eax ;movemos la direccion de la funcion a su lugar :P
			
			
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