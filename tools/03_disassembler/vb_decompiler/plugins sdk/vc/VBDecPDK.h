/* VBDecPDK.h

	VB Decompiler PDK.
	Internal API wrappers, constants.

	(C) 2006 by Jupiter
*/
#ifndef _VBDECPDK_H_
/* Just to not include VBDecPDK.h twice */
#define _VBDECPDK_H_

#ifdef VBDEC_EXPORTS
/* Module API: Exported */
#define VBDEC_API __declspec(dllexport)
#else
/* Module API: Internal */
#define VBDEC_API __declspec(dllimport)
#endif
/* Internal API (wrapper for real VB decompiler API) */
#define	VBD_INT_API	static

/*
	Get/Set functions - vlType
*/
enum	VBD_vlType	{
	/* Get current project data */
	VBD_GetVBProject		=1,
	/* Set current project data */
	VBD_SetVBProject		=2,
	/* Get File Name */
	VBD_GetFileName			=3,         // (v3.5+)
	/* Get Compilation Type (if = 1 then Native Code) */
	VBD_IsNativeCompilation		=4,         // (v3.5+)
	VBD_ClearAllBuffers             =5,         // need if your plugin decompile new language and need to clear all structures (v3.9+)
	VBD_GetCompiler                 =6,         // 1 - vb, 2 - .net, 3 - delphi, 4 - unknown (v3.9+)
	VBD_IsPacked                    =7,         // 1 - packed, 0 - not packed (v3.9+)
	VBD_SetStackCheckBoxValue       =8,         // 0 - unchecked, 1 - checked (v3.9+)
	VBD_SetAnalyzerCheckBoxValue    =9,         // 0 - unchecked, 1 - checked (v3.9+)
	/* Get Form Name */
	VBD_GetVBFormName		=10,
	/* Set Form Name */
	VBD_SetVBFormName		=11,
	/* Get Form Content */
	VBD_GetVBForm			=12,
	/* Set Form Content */
	VBD_SetVBForm			=13,
	/* Get Forms Count */
	VBD_GetVBFormCount		=14,
	/* Get Sub Main() */
	VBD_GetSubMain			=20,
	/* Set Sub Main() */
	VBD_SetSubMain			=21,
	/* Get Name of Module */
	VBD_GetModuleName		=30,
	/* Set Name of Module  */
	VBD_SetModuleName		=31,
	/* Get Module (.bas) */
	VBD_GetModule			=32,
	/* Set Module (.bas) */
	VBD_SetModule			=33,
	/* Get Module String References */
	VBD_GetModuleStringReferences	=34,
	/* Set Module String References */
	VBD_SetModuleStringReferences	=35,
	/* Get Modules Count */
	VBD_SetModuleCount		=36,
	/* Get Module Function Name */
	VBD_GetModuleFunctionName	=40,
	/* Set Module Function Name */
	VBD_SetModuleFunctionName	=41,
	/* Get Module Function Address */
	VBD_GetModuleFunctionAddress	=42,
	/* Set Module Function Address */
	VBD_SetModuleFunctionAddress	=43,
	/* Get Module Function */
	VBD_GetModuleFunction		=44,
	/* Set Module Function */
	VBD_SetModuleFunction		=45,
	/* Get Module Function String Reference */
	VBD_GetModuleFunctionStrRef	=46,
	/* Set Module Function String Reference */
	VBD_SetModuleFunctionStrRef	=47,
	/* Get Module Functions Count */
	VBD_GetModuleFunctionCount	=48,
	/* Get Text in active window */
	VBD_GetActiveText		=50,
	/* Set Text in active window */
	VBD_SetActiveText		=51,
	/* Get disasm listing from the active window */
	VBD_GetActiveDisasmText	=52,
	/* Set disasm listing to the active window */
	VBD_SetActiveDisasmText	=53,
	/* Set Line in active text */
	VBD_SetActiveTextLine =54,
	/* Get active module coordinats (vlNumber,vlFnNumber) */
	VBD_GetActiveModuleCoordinats	=55,          // (v3.5+)
	/* Get VB Decompiler path */
	VBD_GetVBDecompilerPath		=56,          // (v3.5+)
	VBD_GetModuleFunctionCode       =57,          // in "fast decompilation" mode (v3.5+)
	VBD_SetStatusBarText            =58,          // (v3.5+)
	VBD_GetFrxIconCount             =60,          // (v5.0+)
	VBD_GetFrxIconOffset            =61,          // (v5.0+)
	VBD_GetFrxIconSize              =62,          // (v5.0+)
	/* Get Module Function Disasm */
	VBD_GetModuleFunctionDisasm     =70,          // (v9.4+)
	/* Set Module Function Disasm */
	VBD_SetModuleFunctionDisasm     =71,          // (v9.4+)
	/* Update changed window conent */
	VBD_UpdateAll			=100
};


/*
VB Decompiler CallBack function prototype
*/
typedef	int	(__stdcall *pfnVBDecGate)(DWORD vlType, DWORD vlNumber, DWORD vlFnNumber, CHAR* pStr);
/*
   VB Decompiler CallBack function
   
   Must be declared!              
*/
pfnVBDecGate	VBDecGate;

#ifdef _DEBUG
	/* Debug warning - in case of Bad CallBack function */
	TCHAR	*sBadCallBack="Bad CallBack!";
#endif

/* Internal wrappers */
VBD_INT_API	int		VBDecInit	(FARPROC pVBDecGate);
VBD_INT_API	TCHAR*	GetVBDecVal (DWORD vlType, DWORD vlNumber, DWORD vlFnNumber);
VBD_INT_API	TCHAR*	SetVBDecVal	(TCHAR* pStr, DWORD vlType, DWORD vlNumber, DWORD vlFnNumber);

/* Dynamic strings */
static	TCHAR*	stra	(UINT uStrSize);
static	TCHAR*	strar	(LPVOID pStr, UINT uStrSize);
static	VOID	strd	(LPVOID pStr);

/* Allocate string */
static	TCHAR*	stra	(UINT uStrSize)
{
	return(TCHAR*)(HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, uStrSize));
}

/* ReAllocate string */
static	TCHAR*	strar	(LPVOID pStr, UINT uStrSize)
{
	pStr=HeapReAlloc(GetProcessHeap(),HEAP_ZERO_MEMORY,pStr,uStrSize);
	return(TCHAR*)(pStr);
}

/* Free allocated string */
static	VOID	strd	(LPVOID pStr)
{
	HeapFree(GetProcessHeap(), 0, pStr);
	pStr=0;
}


/*
VBDecInit
	Initialize pointer to VB Decompiler CallBack function (VBDecGate)
	
Syntax
	VBDEC_API	int	VBDecInit	(FARPROC pVBDecGate);

Parameters
	FARPROC	pVBDecGate	- pointer to VB Decompiler CallBack function

Return Value
	Returns TRUE if pVBDecGate can be accepted as function pointer.

Remarks
	VB Decompiler fills VBDecModEngine wile calling VBDecompilerPluginLoad. Call VBDecInit with this parameter.

Example:
	VBDecInit(VBDecModEngine);
*/
VBD_INT_API	int	VBDecInit	(FARPROC pVBDecGate)
{
	if (IsBadCodePtr((FARPROC)(pVBDecGate)))
	{
		#ifdef _DEBUG
		MessageBox(0,sBadCallBack,0,MB_OK + MB_ICONEXCLAMATION);
		#endif
		return FALSE;
	}
	VBDecGate=(pfnVBDecGate)(pVBDecGate);
	return	TRUE;
}


/*
GetVBDecVal
	Get some value from VB Decompiler structure
	
Syntax
	VBDEC_API	TCHAR*	GetVBDecVal(DWORD vlType, DWORD vlNumber, DWORD vlFnNumber, DWORD pVBDResult);

Parameters
	DWORD	vlType		- type of value to get (FormName, SubMain, ...)
	DWORD	vlNumber	- form|module index or zero
	DWORD	vlFnNumber	- function index (for 40-47 vlType's)

Return Value
	Pointer to allocated memory with requested data in ANSI, not Unicode.

Remarks
	To free a block of memory allocated use the HeapFree function or strd function.

Example:
	GetVBDecVal(VBD_GetVBProject, 0, 0);
*/
VBD_INT_API	TCHAR*	GetVBDecVal(DWORD vlType, DWORD vlNumber, DWORD vlFnNumber)
{
	LPCWSTR	pVBDResult;
	CHAR	*pStr;
	UINT	dBufSize;
	if (IsBadCodePtr((FARPROC)(VBDecGate)))
	{
		return FALSE;
	}
	/* Get requested data from VBDec */
	pVBDResult=(LPCWSTR)(VBDecGate(vlType, vlNumber, vlFnNumber, (CHAR*)&pStr));
	/* Get size of buffer to convert Unicode to ANSI */
	dBufSize=WideCharToMultiByte(CP_ACP, 0, pVBDResult, -1,0,0,0,0);
	/* Allocate memory for string */
	pStr=(LPSTR)(stra(dBufSize));
	/* Convert to ANSI */
	WideCharToMultiByte(CP_ACP, 0, pVBDResult, -1, pStr, dBufSize, NULL, NULL);
	/*
	Don't forget to free allocated string (later):
	strd(LPVOID(pStr));
	*/
	return	pStr;
}

/*
SetVBDecVal
	Set some value to VB Decompiler structure
	
Syntax
	VBDEC_API	TCHAR*	SetVBDecVal	(LPSTR pStr, DWORD vlType, DWORD vlNumber, DWORD vlFnNumber);

Parameters
	LPSTR	pStr		- string to set
	DWORD	vlType		- type of value to get (FormName, SubMain, ...)
	DWORD	vlNumber	- form|module index or zero
	DWORD	vlFnNumber	- function index (for 40-47 vlType's)

Return Value
	Value Returned by VB Decompiler

Example:
	SetVBDecVal("New Data",VBD_GetVBProject, 0, 0);
*/
VBD_INT_API	TCHAR*	SetVBDecVal	(TCHAR* pStr, DWORD vlType, DWORD vlNumber, DWORD vlFnNumber)
{
	if (IsBadCodePtr((FARPROC)(VBDecGate)))
	{
		return FALSE;
	}
	return	(TCHAR*)(VBDecGate(vlType, vlNumber, vlFnNumber, pStr));
}

#endif//_VBDECPDK_H_
