-- 对dump窗口选中地址的内容进行bp
local ffi = require("ffi")
local bridge = require "bridge"
local dbg = require "dbg"
local utils = require "utils"

local print = dbg._plugin_logputs

local function starts_with(str, start)
   return str:sub(1, #start) == start
end

local start, last
if arg[1] then
   -- 解析参数，支持1个或者2个参数
   start = bridge.DbgValFromString(arg[1])
   if arg[2] then
      last = bridge.DbgValFromString(arg[2])
   else
      last = start + 1
   end
else
   -- 从dump窗口获取选中地址
   local sd = ffi.new("SELECTIONDATA[?]", 1)
   if bridge.GuiSelectionGet(1, sd) -- GUI_DUMP 1
   then
      -- 64位sd[0].start是cdata(1998196736ULL)而非32位number
      start = sd[0].start
      last = sd[0].end1
   else
      print("[bpv] failed to get dump selection! ")
   end
end

print(string.format("type:%s, start:%s, end:%s", type(start), utils.tohexstring(start), utils.tohexstring(last)))

-- 64位cdata不能用for循环，但计算什么的是支持的，详见doc/ext_ffi_semantics.html#cdata_arith
local i = start
repeat
   buf = ffi.new("size_t[?]", 1)
   if bridge.DbgMemRead(i, ffi.cast("unsigned char*", buf), ffi.sizeof("size_t")) then
      if bridge.DbgMemIsValidReadPtr(buf[0]) then
	 bridge.DbgCmdExecDirect(string.format("bp %s", utils.tohexstring(buf[0])))
      end
   end
   i = i + ffi.sizeof("size_t")
until(i > last)
