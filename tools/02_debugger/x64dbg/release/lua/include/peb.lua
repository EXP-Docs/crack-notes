local ffi = require "ffi"
-- 这里有偏移 https://www.geoffchappell.com/studies/windows/win32/ntdll/structs/peb/index.htm?tx=21
-- 抄自http://www.nirsoft.net/kernel_struct/vista/PEB.html，这是vista的，参考上面的链接只支持到XP，而且错误挺多的
ffi.cdef[[
typedef unsigned char UCHAR;
typedef unsigned long ULONG;
typedef void* PPEB_LDR_DATA;
typedef void* PRTL_USER_PROCESS_PARAMETERS;
typedef void* PRTL_CRITICAL_SECTION;
typedef void* PPEB_FREE_BLOCK;
typedef void VOID;
typedef void* PVOID;
typedef unsigned int DWORD;
typedef long LONG;
typedef long long LONGLONG;
typedef unsigned long long ULONGLONG;
typedef void _ACTIVATION_CONTEXT_DATA;
typedef unsigned short USHORT;
typedef wchar_t* PWSTR;
typedef void* ULONG_PTR;
typedef struct _LIST_ENTRY {
  struct _LIST_ENTRY *Flink;
  struct _LIST_ENTRY *Blink;
} LIST_ENTRY, *PLIST_ENTRY, PRLIST_ENTRY;
typedef union _LARGE_INTEGER {
struct {
DWORD LowPart;
LONG HighPart;
};
struct {
DWORD LowPart;
LONG HighPart;
} u;
LONGLONG QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;
typedef union _ULARGE_INTEGER {
struct {
DWORD LowPart;
DWORD HighPart;
};
ULONGLONG QuadPart;
} ULARGE_INTEGER; 
typedef struct _LSA_UNICODE_STRING {
USHORT Length;
USHORT MaximumLength;
PWSTR Buffer;
} LSA_UNICODE_STRING, *PLSA_UNICODE_STRING, UNICODE_STRING, *PUNICODE_STRING;
typedef void _FLS_CALLBACK_INFO;
typedef void _ASSEMBLY_STORAGE_MAP;
	typedef unsigned char  uchar;
	typedef unsigned short ushort;
	typedef unsigned int    uint; 
	typedef unsigned int    UINT; 
	typedef unsigned long   ulong;
	typedef unsigned short  WORD;
	typedef long  LONG;
	typedef unsigned long DWORD;
	typedef unsigned char BYTE;
	typedef void *HWND;
	typedef void *HANDLE;	
	typedef void *HINSTANCE;
	typedef long * WPARAM;
	typedef long * LPARAM;

typedef struct _PEB
{
     UCHAR InheritedAddressSpace;
     UCHAR ReadImageFileExecOptions;
     UCHAR BeingDebugged;
     UCHAR BitField;
//     ULONG ImageUsesLargePages: 1;
//     ULONG IsProtectedProcess: 1;
//     ULONG IsLegacyProcess: 1;
//     ULONG IsImageDynamicallyRelocated: 1;
//     ULONG SpareBits: 4;
     PVOID Mutant;
     PVOID ImageBaseAddress;
     PPEB_LDR_DATA Ldr;
     PRTL_USER_PROCESS_PARAMETERS ProcessParameters;
     PVOID SubSystemData;
     PVOID ProcessHeap;
     PRTL_CRITICAL_SECTION FastPebLock;
     PVOID AtlThunkSListPtr;
     PVOID IFEOKey;
     ULONG CrossProcessFlags;
//     ULONG ProcessInJob: 1;
//     ULONG ProcessInitializing: 1;
//     ULONG ReservedBits0: 30;
     union
     {
          PVOID KernelCallbackTable;
          PVOID UserSharedInfoPtr;
     };
     ULONG SystemReserved[1];
     ULONG SpareUlong;
     PPEB_FREE_BLOCK FreeList;
     ULONG TlsExpansionCounter;
     PVOID TlsBitmap;
     ULONG TlsBitmapBits[2];
     PVOID ReadOnlySharedMemoryBase;
     PVOID HotpatchInformation;
     VOID * * ReadOnlyStaticServerData;
     PVOID AnsiCodePageData;
     PVOID OemCodePageData;
     PVOID UnicodeCaseTableData;
     ULONG NumberOfProcessors;
     ULONG NtGlobalFlag;
     LARGE_INTEGER CriticalSectionTimeout;
     ULONG_PTR HeapSegmentReserve;
     ULONG_PTR HeapSegmentCommit;
     ULONG_PTR HeapDeCommitTotalFreeThreshold;
     ULONG_PTR HeapDeCommitFreeBlockThreshold;
     ULONG NumberOfHeaps;
     ULONG MaximumNumberOfHeaps;
     VOID * * ProcessHeaps;
     PVOID GdiSharedHandleTable;
     PVOID ProcessStarterHelper;
     ULONG GdiDCAttributeList;
     PRTL_CRITICAL_SECTION LoaderLock;
     ULONG OSMajorVersion;
     ULONG OSMinorVersion;
     WORD OSBuildNumber;
     WORD OSCSDVersion;
     ULONG OSPlatformId;
     ULONG ImageSubsystem;
     ULONG ImageSubsystemMajorVersion;
     ULONG ImageSubsystemMinorVersion;
     ULONG_PTR ImageProcessAffinityMask;
     ULONG_PTR GdiHandleBuffer[26];
     ULONG Pad[8];
     PVOID PostProcessInitRoutine;
     PVOID TlsExpansionBitmap;
     ULONG TlsExpansionBitmapBits[32];
     ULONG SessionId;
     ULARGE_INTEGER AppCompatFlags;
     ULARGE_INTEGER AppCompatFlagsUser;
     PVOID pShimData;
     PVOID AppCompatInfo;
     UNICODE_STRING CSDVersion;
     _ACTIVATION_CONTEXT_DATA * ActivationContextData;
     _ASSEMBLY_STORAGE_MAP * ProcessAssemblyStorageMap;
     _ACTIVATION_CONTEXT_DATA * SystemDefaultActivationContextData;
     _ASSEMBLY_STORAGE_MAP * SystemAssemblyStorageMap;
     ULONG MinimumStackCommit; // xp就支持到这里
//     _FLS_CALLBACK_INFO * FlsCallback;
//     LIST_ENTRY FlsListHead;
//     PVOID FlsBitmap;
//     ULONG FlsBitmapBits[4];
//     ULONG FlsHighIndex;
//     PVOID WerRegistrationData;
//     PVOID WerShipAssertPtr;
} PEB, *PPEB;
]]
local dbg = require "dbg"
local bridge = require "bridge"
local print = dbg._plugin_logputs

local dbgPid = bridge.DbgGetProcessId();
if (dbgPid == 0) then
   print("there are no debugee process!")
   return
end

local peb = bridge.DbgGetPebAddress(dbgPid);
if(peb == 0) then
   print("peb is wrong(0)!")
   return
end
local buf = ffi.new("PEB[?]", 1)
if 0 == bridge.DbgMemRead(peb, ffi.cast("unsigned char*", buf), ffi.sizeof("PEB")) then
   print("failed to read peb!")
   return
end
local r = {}
r.address = peb
r.buf = buf
return r
