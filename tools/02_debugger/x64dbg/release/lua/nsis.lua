-- 脚本的作用是断下后检查eax/rax的值是否是5DC0，不是就继续跑到是

local bridge = require "bridge"
local dbg = require "dbg"

function run_to_break()
   bridge.DbgCmdExecDirect("run")
   dbg._plugin_waituntilpaused()
end

bridge.DbgCmdExecDirect("bp 0040557D")
run_to_break()
bridge.DbgCmdExecDirect("dump 0042E3A0")


