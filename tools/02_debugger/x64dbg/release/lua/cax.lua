-- 脚本的作用是断下后检查eax/rax的值是否是5DC0，不是就继续跑到是

local ffi = require("ffi")
local bridge = require "bridge"
local dbg = require "dbg"
local printf = dbg._plugin_logprintf
local print = dbg._plugin_logputs
local utils = require "utils"
local Wait = dbg._plugin_waituntilpaused;

-- if(bridge.DbgCmdExecDirect("StepOver")) then
--        Wait()
-- end

function run_to_break()
   bridge.DbgCmdExecDirect("run")
   dbg._plugin_waituntilpaused()
end

function get_cax()
   -- start = bridge.DbgValFromString("0") -- for break

   regdump = ffi.new("REGDUMP[?]", 1)
   local ok = bridge.DbgGetRegDumpEx(regdump, ffi.sizeof("REGDUMP"))
-- printf("ok:%d", ffi.new("int", ok))
   if ok then
   -- utils.print_struct(regdump, "REGDUMP")
      -- local regdump = ffi.cast("REGDUMP*", regdump)
      -- -- 检查最后几个变量是否正确
      -- printf("lastError.code:%x\n", ffi.new("int", regdump.lastError.code))
      -- printf("lastError.name:%s\n", ffi.cast("char*", regdump.lastError.name))
      -- printf("lastStatus.code:%x\n", ffi.new("int", regdump.lastStatus.code))
      -- printf("lastStatus.name:%s\n", ffi.cast("char*", regdump.lastStatus.name))
      -- utils.print_struct(regdump[0].regcontext, "REGISTERCONTEXT")

      -- print(string.format("1cax: %s",utils.tohexstring(regdump.regcontext.cax))) -- 
      return regdump[0].regcontext.cax;
   end
end

local cax = get_cax()
while true do -- cax ~= 0x5DC0 do
   run_to_break()
   cax = get_cax()
   print(string.format("cax: %s", cax)) -- 
   if cax > 0x1000 then
      -- start = bridge.DbgValFromString("0") -- for break
      -- get_cax()
      break
   end
end

