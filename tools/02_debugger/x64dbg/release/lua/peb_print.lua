local dbg = require "dbg"
local utils = require "utils"
local peb = require "peb"
local print = dbg._plugin_logputs

print(string.format("\n================peb addres: %s===================", utils.tohexstring(peb.address)))
utils.print_struct(peb.buf, "PEB")
print("================peb end===================")
print("please check the log!")
