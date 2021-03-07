-- x64dbg\src\bridge\bridgemain.h

local ffi = require("ffi")

local cdef_str = [[]]
if ffi.abi("32bit") then
   cdef_str = cdef_str ..
[[
#pragma pack(push, 8)
]]
else
   cdef_str = cdef_str ..
[[
#pragma pack(push, 16)
]]
end
cdef_str = cdef_str ..
[[
typedef unsigned __int64 ULONGLONG;
typedef __int64 LONGLONG;
typedef size_t ULONG_PTR;

typedef struct __declspec(align(16))
{
    ULONGLONG Low;
    LONGLONG High;
} XMMREGISTER;
typedef struct
{
    XMMREGISTER Low; //XMM/SSE part
    XMMREGISTER High; //AVX part
} YMMREGISTER;
]]

-- dont' know how to support #ifdef _WIN64 ... #endif

cdef_str = cdef_str .. [[
typedef uintptr_t duint;
typedef unsigned int DWORD;
typedef uintptr_t ULONG_PTR;
typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef struct
{
    duint start;
    duint end1;
} SELECTIONDATA;

typedef struct
{
    WORD   ControlWord;
    WORD   StatusWord;
    WORD   TagWord;
    DWORD   ErrorOffset;
    DWORD   ErrorSelector;
    DWORD   DataOffset;
    DWORD   DataSelector;
    DWORD   Cr0NpxState;
} X87FPU;
typedef struct
{
    ULONG_PTR cax;
    ULONG_PTR ccx;
    ULONG_PTR cdx;
    ULONG_PTR cbx;
    ULONG_PTR csp;
    ULONG_PTR cbp;
    ULONG_PTR csi;
    ULONG_PTR cdi;
]]
if ffi.abi("32bit") then
else
   cdef_str = cdef_str ..
[[    
    ULONG_PTR r8;
    ULONG_PTR r9;
    ULONG_PTR r10;
    ULONG_PTR r11;
    ULONG_PTR r12;
    ULONG_PTR r13;
    ULONG_PTR r14;
    ULONG_PTR r15;
]]
end
cdef_str = cdef_str ..    
[[   
    ULONG_PTR cip;
    ULONG_PTR eflags;
    unsigned short gs;
    unsigned short fs;
    unsigned short es;
    unsigned short ds;
    unsigned short cs;
    unsigned short ss;
    ULONG_PTR dr0;
    ULONG_PTR dr1;
    ULONG_PTR dr2;
    ULONG_PTR dr3;
    ULONG_PTR dr6;
    ULONG_PTR dr7;
    BYTE RegisterArea[80];
    X87FPU x87fpu;
    DWORD MxCsr;
]]
if ffi.abi("32bit") then
   cdef_str = cdef_str ..
[[
    XMMREGISTER XmmRegisters[8];
    YMMREGISTER YmmRegisters[8];
]]
else
   cdef_str = cdef_str ..
[[
    XMMREGISTER XmmRegisters[16];
    YMMREGISTER YmmRegisters[16];
]]
end
cdef_str = cdef_str ..
[[
} REGISTERCONTEXT;
typedef struct
{
    bool c;
    bool p;
    bool a;
    bool z;
    bool s;
    bool t;
    bool i;
    bool d;
    bool o;
} FLAGS;
typedef struct
{
    BYTE    data[10];
    int     st_value;
    int     tag;
} X87FPUREGISTER;
typedef struct
{
    bool FZ;
    bool PM;
    bool UM;
    bool OM;
    bool ZM;
    bool IM;
    bool DM;
    bool DAZ;
    bool PE;
    bool UE;
    bool OE;
    bool ZE;
    bool DE;
    bool IE;

    unsigned short RC;
} MXCSRFIELDS;
typedef struct
{
    bool B;
    bool C3;
    bool C2;
    bool C1;
    bool C0;
    bool ES;
    bool SF;
    bool P;
    bool U;
    bool O;
    bool Z;
    bool D;
    bool I;

    unsigned short TOP;

} X87STATUSWORDFIELDS;
typedef struct
{
    bool IC;
    bool IEM;
    bool PM;
    bool UM;
    bool OM;
    bool ZM;
    bool DM;
    bool IM;

    unsigned short RC;
    unsigned short PC;

} X87CONTROLWORDFIELDS;
typedef struct
{
    DWORD code;
    char name[128];
} LASTERROR;

typedef struct
{
    DWORD code;
    char name[128];
} LASTSTATUS;
typedef struct
{
    REGISTERCONTEXT regcontext;
    FLAGS flags;
    X87FPUREGISTER x87FPURegisters[8];
    unsigned long long mmx[8];
    MXCSRFIELDS MxCsrFields;
    X87STATUSWORDFIELDS x87StatusWordFields;
    X87CONTROLWORDFIELDS x87ControlWordFields;
    LASTERROR lastError;
    LASTSTATUS lastStatus;
} REGDUMP;
typedef struct SYMBOLPTR_
{
    duint modbase;
    const void* symbol;
} SYMBOLPTR;
typedef bool (*CBSYMBOLENUM)(const struct SYMBOLPTR_* symbol, void* user);
typedef enum
{
    sym_import,
    sym_export,
    sym_symbol
} SYMBOLTYPE;
typedef struct SYMBOLINFO_
{
    duint addr;
    char* decoratedSymbol;
    char* undecoratedSymbol;
    SYMBOLTYPE type;
    bool freeDecorated;
    bool freeUndecorated;
    DWORD ordinal;
} SYMBOLINFO;

bool DbgMemRead(duint va, unsigned char* dest, duint size);
bool GuiSelectionGet(int hWindow, SELECTIONDATA* selection);
bool DbgCmdExecDirect(const char* cmd);
duint DbgValFromString(const char* string);
bool DbgMemIsValidReadPtr(duint addr);
DWORD DbgGetProcessId();
duint DbgGetPebAddress(DWORD ProcessId);
bool DbgGetRegDumpEx(REGDUMP* regdump, size_t size);
void DbgSymbolEnum(duint base, CBSYMBOLENUM cbSymbolEnum, void* user);
void DbgGetSymbolInfo(const SYMBOLPTR* symbolptr, SYMBOLINFO* info);
]]

ffi.cdef(cdef_str)

if ffi.abi("32bit") then
   return ffi.load("x32bridge" or "x32_bridge")
else
   return ffi.load("x64bridge" or "x64_bridge")
end
