local ffi = require("ffi")
local bridge = require "bridge"
local dbg = require "dbg"
local printf = dbg._plugin_logprintf
local print = dbg._plugin_logputs
local utils = require "utils"
local Wait = dbg._plugin_waituntilpaused;
local peb = require "peb"

local rust_alloc;
local rust_dealloc;
local rust_realloc;
local rust_alloc_zeroed;

-- 获取当前exe模块里的rust内存分配函数
bridge.DbgSymbolEnum(ffi.cast("duint", peb.buf[0].ImageBaseAddress),
		     function (s, u)
			local si = ffi.new("SYMBOLINFO[?]", 1)
			bridge.DbgGetSymbolInfo(s, si)

			-- char*也要用ffi.string转成lua认识的string(是cdata)
			if ffi.string(si[0].decoratedSymbol) == "__rust_alloc" then
			   rust_alloc = si[0].addr
			end
			if ffi.string(si[0].decoratedSymbol) == "__rust_dealloc" then
			   rust_dealloc = si[0].addr
			end
			if ffi.string(si[0].decoratedSymbol) == "__rust_realloc" then
			   rust_realloc = si[0].addr
			end
			if ffi.string(si[0].decoratedSymbol) == "__rust_alloc_zeroed" then
			   rust_alloc_zeroed = si[0].addr
			end			
			return true
		     end,
		     ffi.cast("void*", 0))
printf("rust_alloc: %s, ", utils.tohexstring(rust_alloc))
printf("rust_dealloc: %s, ", utils.tohexstring(rust_dealloc))
printf("rust_realloc: %s, ", utils.tohexstring(rust_realloc))
printf("rust_alloc_zeroed: %s\n", utils.tohexstring(rust_alloc_zeroed))
if not rust_alloc or not rust_dealloc or not rust_realloc or not rust_alloc_zeroed then
   print("failed to get rust symbols!")
   return
end

function run_to_break()
   bridge.DbgCmdExecDirect("run")
   dbg._plugin_waituntilpaused()
end

function get_size()
   regdump = ffi.new("REGDUMP[?]", 1)
   local ok = bridge.DbgGetRegDumpEx(regdump, ffi.sizeof("REGDUMP"))
   if ok then
      -- utils.print_struct(regdump[0].regcontext, "REGISTERCONTEXT")
      return regdump[0].regcontext.ccx, regdump[0].regcontext.cip -- rcx, rdx, r8, r9
   end
end

-- 要求先断在你想要检查的call上面，并在该call的下一句下断，再lua rust

bridge.DbgCmdExecDirect(string.format("bp %s", utils.tohexstring(rust_alloc)))
bridge.DbgCmdExecDirect(string.format("bp %s", utils.tohexstring(rust_realloc)))
bridge.DbgCmdExecDirect(string.format("bp %s", utils.tohexstring(rust_alloc_zeroed)))
run_to_break()

local size, ip = get_size()
while ip == rust_alloc or ip == rust_realloc or ip== rust_alloc_zeroed do
   run_to_break()
   size, ip = get_size()
   print(string.format("size: %s", size)) -- 
   -- if size > 0x1000 then
      -- start = bridge.DbgValFromString("0") -- for break
      -- get_size()
      -- break
   -- end
end
