-- 包含中文的话请把文件保存为utf-8格式，x64dbg的API的字符串参数也都是utf-8

local dbg = require "dbg"
local ffi = require "ffi"
local printf = dbg._plugin_logprintf -- %d要特别注意，参考luajit文档doc/ext_ffi_semantics.html#convert_vararg，如果不习惯就直接用print加上string.format
local print = dbg._plugin_logputs

-- 取命令参数
print(string.format("命令参数：arg[-1]:\"%s\", arg[0]:\"%s\", arg[1]:\"%s\", arg[2]:\"%s\"\n",arg[-1], arg[0], arg[1], arg[2]))
-- printf("命令参数：arg[-1]:\"%s\", arg[0]:\"%s\", arg[1]:\"%s\", arg[2]:\"%s\"\n", )
-- printf("is32bit:%d\n", is32bit)
printf("is32bit:%d\n", is32bit)
local number = 34
printf("take care of number:%d, other wise:%d\n", ffi.new("int", number), number)
