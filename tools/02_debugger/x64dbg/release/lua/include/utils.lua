local u = {}
local ffi = require "ffi"
local reflect = require "reflect"
local dbg = require "dbg"

ffi.cdef[[
int wsprintfA(char*, const char*, ...);
]]

local print = dbg._plugin_logputs

u.tohexstring = function(addr)
   local buf = ffi.new("char[?]", 30)
   if(type(addr) == "number") then
      local buflen = ffi.C.wsprintfA(buf, "%p", ffi.new("uint32_t", addr)) -- or "x"
   else
      local buflen = ffi.C.wsprintfA(buf, "%p", addr) -- or "Ix"
   end
   return ffi.string(buf, buflen)
end

-- 不知道为什么\t打印不出来，用空格代替
local function get_tab(tab)
   local t = ""
   for i=1, tab do
      t = t.." "
   end
   return t
end

-- 匿名union的简单支持
local function print_union(u, root, tab, struct)
   local s = ""
   for refct in u:members()
   do
      if #s ==0 then
	 s = s..string.format("%s[+%x]%s:%s", get_tab(tab+1), ffi.offsetof(struct, refct.name), refct.name, root[refct.name])
      else
	 s = s..string.format("\n%s[+%x]%s:%s", get_tab(tab+1), ffi.offsetof(struct, refct.name), refct.name, root[refct.name])
      end
   end
   print(s)
end

-- 暂不支持struct嵌套
local function print_struct_impl(struct, root, tab)
   for refct in reflect.typeof(struct):members()
   do
      -- print(string.format("%s, %s", refct.what, refct.name))
      if(refct.what == "union") then
	 print_union(refct, root, tab, struct)
      elseif (refct.what == "field") then
	 print(string.format("%s[+%x]%s:%s", get_tab(tab), ffi.offsetof(struct, refct.name), refct.name, root[refct.name]))
      elseif (refct.what == "bitfield") then
	 print(string.format("%s[+%x]%s:%s", get_tab(tab), ffi.offsetof(struct, refct.name), refct.name, root[refct.name]))
      else
	 print(string.format("contact lynnux@qq.com to support this field type: %s, name:%s", refct.what, refct.name))
      end
   end   
end

u.print_struct = function(addr, struct)
   local v = ffi.cast(struct.."*", addr)
   if v == nil then
      print(string.format("cast type %s error!", struct))
      return
   end
   print_struct_impl(struct, v, 1)
end

u.print = dbg._plugin_logputs
u.printf = dbg._plugin_logprintf

return u
