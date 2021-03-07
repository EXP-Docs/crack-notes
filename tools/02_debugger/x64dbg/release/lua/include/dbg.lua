-- x64dbg\src\dbg\_plugins.h

local ffi = require("ffi")
ffi.cdef[[
void _plugin_logprintf(const char *fmt, ...);
void _plugin_logputs(const char* text);
bool _plugin_waituntilpaused();
]]

if ffi.abi("32bit") then
   return ffi.load("x32dbg") or ffi.load("x32_dbg")
else
   return ffi.load("x64dbg") or ffi.load("x64_dbg")
end
