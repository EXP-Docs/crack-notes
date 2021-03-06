//////////////////////////////////////////////////////////////////////////////////////////
//
//
//   PESpin [1.3.04] API Tracer plugin for ImportRec
//    
//   Author : Nagareshwar Y Talekar.
//   Date   : 1st May 2006.
//
//
//
//////////////////////////////////////////////////////////////////////////////////////////


#include <windows.h>
#include <stdio.h>

#define DLLEXPORT extern "C" __declspec( dllexport )


DLLEXPORT DWORD Trace(DWORD hFileMap, DWORD dwSizeMap, DWORD dwTimeOut, DWORD dwToTrace,  DWORD dwExactCall);


// Initialize all you need
BOOL APIENTRY DllMain( HANDLE hModule, DWORD  reason, LPVOID lpReserved )
{
    return TRUE;
}

// Exported function to use
//
// Parameters:
// -----------
// <hFileMap>    : HANDLE of the mapped file
// <dwSizeMap>   : Size of that mapped file
// <dwTimeOut>   : TimeOut of ImpREC in Options
// <dwToTrace>   : Pointer to trace (in VA)
// <dwExactCall> : EIP of the exact call (in VA)
//
// Returned value:
// ---------------
// Use a value greater or equal to 200. It will be shown by ImpREC if no output were created

DLLEXPORT DWORD Trace(DWORD hFileMap, DWORD dwSizeMap, DWORD dwTimeOut, DWORD dwToTrace, DWORD dwExactCall)
{
	//FILE *logFile;
	//char str[1024];
	DWORD finalAddress;
	DWORD jmpAddress;
	DWORD nextAddress;


	//logFile = fopen("C:\\pespin_log.txt", "a");
	
	//if( logFile == NULL )
	//	return 201;

	// Map the view of the file
	DWORD* dwPtrOutput = (DWORD*)MapViewOfFile((HANDLE)hFileMap, FILE_MAP_READ | FILE_MAP_WRITE, 0, 0, 0);
	
	if (!dwPtrOutput)
	{
		return (201);  // mapping failed
	}
	
	// Check the size of the map file
	if (dwSizeMap < 4)
	{
		// Invalid map size
		UnmapViewOfFile((LPCVOID)dwPtrOutput);
		CloseHandle((HANDLE)hFileMap);
		return (203);
	}

	
	if (IsBadReadPtr((VOID*)dwToTrace, 4))
	{
		// Bad pointer!
		UnmapViewOfFile((LPCVOID)dwPtrOutput);
		CloseHandle((HANDLE)hFileMap);
		return (205);
	}
	
	/*
	Steps
      1)  First instruction must be EB 01
      2)  Add 3 to starting address to skip the first jmp instruction
	  3)  Next go through each byte until you encounter EB 07 instruction
	      Also keep the count of bytes passed.
      4)  Next add 3 to current address to reach jmp <real api> instruction
	  5)  api adresss = <jmp api address> + next instrn addr - count of bytes

	*/
	
	BYTE *taddr = (BYTE*)dwToTrace;

	// First instruction must be EB 01
	if (taddr[0] != 0xEB || taddr[1] != 0x01)
	{
		//fputs("\nThis is not api redirected address..returning", logFile);
		//fclose(logFile);
		UnmapViewOfFile((LPCVOID)dwPtrOutput);
		CloseHandle((HANDLE)hFileMap);

		return 211;		
	}

	taddr = taddr + 3;

	// Now go through each byte until the EB 07 instruction comes
	int byteCount = 0;

	while(1)
	{
		if( taddr[0] == 0xEB)
		{
			if( taddr[1] == 0x07 )
			{
				//fputs("\nWe have got EB 07", logFile);
				break;
			}
			else
			{
				//fputs("\nGot 0xEB but no 07, Not a api redir address", logFile);
				//fclose(logFile);

				UnmapViewOfFile((LPCVOID)dwPtrOutput);
				CloseHandle((HANDLE)hFileMap);
				return 212;
			}
		}
	
		byteCount++; 
		taddr++;

		// check if max count exceeded
		if( byteCount > 25 )
		{
				//fputs("\n Max count exceeded . Unable to find EB 07 instruction", logFile);
				//fclose(logFile);
				UnmapViewOfFile((LPCVOID)dwPtrOutput);
				CloseHandle((HANDLE)hFileMap);
				return 214;			
		
		}

	}
	

	taddr = taddr + 3;

	// Calculate actual api address
	jmpAddress = *((DWORD *)(taddr + 1));
	nextAddress = (DWORD) (taddr + 5);

	//sprintf(str, "\n Next address is 0x%.8x ", nextAddress);
	//fputs(str,logFile);


    finalAddress = jmpAddress + nextAddress - byteCount;

	//sprintf(str, "\n Final api address is 0x%.8x ", finalAddress);
	//fputs(str,logFile);

	*dwPtrOutput = finalAddress;

	UnmapViewOfFile((LPCVOID)dwPtrOutput);
	CloseHandle((HANDLE)hFileMap);
	
	//fclose(logFile);
	
	return (200);

}
