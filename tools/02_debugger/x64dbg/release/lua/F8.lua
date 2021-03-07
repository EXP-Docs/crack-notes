local ffi = require("ffi")
local bridge = require "bridge"
local dbg = require "dbg"

local Wait = dbg._plugin_waituntilpaused;

if(bridge.DbgCmdExecDirect("StepOver")) then
       Wait()
end
