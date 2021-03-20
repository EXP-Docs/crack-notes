/* VBDecC.c

	Exapmle of usage VB Decompiler API
	Internal API wrappers are in VBDecPDK.h, don't forget to include this file.

	Support Unicode & ANSI build (uncomment _UNICODE to build Unicode version)

	(C) 2006 by Jupiter
*/

/* Only used stuff */
#define	WIN32_LEAN_AND_MEAN
/* Enable if you need unicode build */
//#define	_UNICODE
#include	<windows.h>
#include	<winuser.h>
#include	<tchar.h>
#include	<memory.h>
/* Main PDK include */
#include	"VBDecPDK.h"

VBDEC_API	VBDecompilerPluginName	(HWND hWndVBDec, HWND hRichEd, LPSTR sBuffer, DWORD lpResVBD1);
VBDEC_API	VBDecompilerPluginLoad	(HWND hWndVBDec, HWND hRichEd, LPSTR sBuffer, FARPROC VBDecModEngine);

/* Name of the Module - displayed in Plugins menu */
TCHAR	*sModuleName="Sample Module [C]";
/* Inserted data */
TCHAR	*sNewData="New Data";
/* Module Handle */
HANDLE	hInst;

/*
Enable GUI: dialog box
Otherwise MessageBox is used
*/
#define	_GUI
#ifdef	_GUI
/* Dialog id */
#define	IDD_VBD_MODULE	101
/* Close button */
#define	IDC_EXIT	1003
/* Output window */
#define	IDE_OUTPUT	1000
#endif

static BOOL CALLBACK DlgProc(HWND hDlg,UINT uMsg,WPARAM wParam,LPARAM lParam);

/*
Module EntryPoint. Nothing special.
*/
BOOL	APIENTRY	DllMain	(HANDLE hModule, DWORD  fdwReason, LPVOID lpReserved)
{
    switch (fdwReason)
	{
		case DLL_PROCESS_ATTACH:
			hInst=hModule;
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
    }
    return TRUE;
}

/*
	VB Dec calls this function to get name of module.

Syntax
	VBDecompilerPluginName	(HWND hWndVBDec, HWND hRichEd, LPSTR sBuffer, DWORD lpResVBD1);

Parameters
	HWND	hWndVBDec	- handle to VB Decompiler window
	HWND	hRichEd		- handle to VB Decompiler RichEdit window
	LPSTR	sBuffer		- buffer of 100 chars. Copy name of your plugin here
	DWORD	lpResVBD1	- Reserved

Return Value
	VB Dec doesn't check return value ;)

Remarks
	Module name 100 chars max
*/
VBDEC_API	VBDecompilerPluginName	(HWND hWndVBDec, HWND hRichEd, LPSTR sBuffer, DWORD lpResVBD1)
{
	/*
	Just copy our name to VB Decompiler buffer
	This name will be displayed in 'Plugins' menu.
	*/
	strcpy(sBuffer,sModuleName);
	return	TRUE;
}


/*
	VB Dec calls this function to execute module

Syntax
	VBDEC_API	VBDecompilerPluginLoad	(HWND hWndVBDec, HWND hRichEd, LPSTR sBuffer, FARPROC VBDecModEngine);

Parameters
	HWND	hWndVBDec	- handle to VB Decompiler window
	HWND	hRichEd		- handle to VB Decompiler RichEdit window
	LPSTR	sBuffer		- buffer of 100 chars. Copy name of your plugin here
	FARPROC	VBDecModEngine	- address of VB Decompiler CallBack function

Return Value
	VB Dec doesn't check return value ;)

Remarks
	Always check values returned by VB Dec! VB Dec can provide empty data.
*/
VBDEC_API	VBDecompilerPluginLoad	(HWND hWndVBDec, HWND hRichEd, LPSTR sBuffer, FARPROC VBDecModEngine)
{
	#ifndef _GUI
	TCHAR	*pStr;
	#endif
	/*
	Initialize module.
	Save address of VB decompiler CallBack in VBDecInit.
	This must be first call in your function to verify that we got correct address.
	*/
	if (!(VBDecInit(VBDecModEngine)))
	{
		return	FALSE;
	}
	#ifndef _GUI
	/*
	Get current VB Project content (form/code/...)
	In the Project window may be any data ;)
	*/
	//if (pStr=GetVBDecVal(VBD_GetVBProject, 0, 0))
	/* Get Active Text */
	if (pStr=GetVBDecVal(VBD_GetActiveText, 0, 0))
	{
		/* Display content */
		MessageBox(hWndVBDec,pStr,sModuleName,MB_OK + MB_ICONINFORMATION);
		/* Free allocated string (internal) */
		strd((LPVOID)(pStr));
	}
	/*
	Set new value to VBProject
	Second call updates window content.
	*/
	SetVBDecVal(sNewData,VBD_SetVBProject,0,0);
	SetVBDecVal(sNewData,VBD_UpdateAll,0,0);
	#else	/* GUI, show dialog */
	DialogBoxParam(hInst, MAKEINTRESOURCE(IDD_VBD_MODULE), hWndVBDec,
			(DLGPROC)(DlgProc), (LPARAM)NULL);
	#endif
	return	TRUE;
}


#ifdef _GUI
/*
Main dialog function.
Used to show content got from VB Decompiler via its API
*/
static BOOL CALLBACK DlgProc(HWND hDlg,UINT uMsg,WPARAM wParam,LPARAM lParam)
{
	TCHAR	*pStr;
	//HICON hIcon;

	switch( uMsg )
	{
	case WM_INITDIALOG:
		/*
		Get current VB Project content (form/code/...)
		In the Project window may be any data ;)
		*/
		//if (pStr=GetVBDecVal(VBD_GetVBProject, 0, 0))
		/* Get Active Text */
		if (pStr=GetVBDecVal(VBD_GetActiveText, 0, 0))
		{
			/* Display content */
			//MessageBox(hWndVBDec,pStr,sModuleName,MB_OK + MB_ICONINFORMATION);
			SetDlgItemText(hDlg,IDE_OUTPUT,pStr);
			/* Free allocated string (internal) */
			strd((LPVOID)(pStr));
		}
		/*
		Set new value to VBProject
		Second call updates window content.
		*/
		SetVBDecVal(sNewData,VBD_SetVBProject,0,0);
		SetVBDecVal(sNewData,VBD_UpdateAll,0,0);
	case WM_COMMAND:
		switch( LOWORD(wParam) )
		{
		case IDC_EXIT:
			EndDialog(hDlg, 0);
			break;
		//case IDC_FILEBUTTON:
		//	break;
		//case IDC_ABOUT:
		//	MessageBox(hDlg, ABOUT_TXT, ABOUT_TIT, MB_OK|MB_ICONINFORMATION);
		//	break;
		default:
			return(FALSE);
		}
		break;
	case WM_CLOSE:
		EndDialog(hDlg, 0);
		break;
	default:
	return(FALSE);
	}

	return(TRUE);
}
#endif
