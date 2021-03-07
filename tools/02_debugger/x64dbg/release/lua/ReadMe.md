## 安装使用 Install And Usage
首先git clone或者下载zip解压到某处A目录，
安装[x64dbg_tol插件](http://pan.baidu.com/s/1jGgL774)，在插件的菜单options对话框里设置luadir指向A目录。
然后你就可以在x64dbg的命令行里输入lua命令了：
```
lua 文件名(支持全路径),参数1,参数2,参数3...
``` 
参数用,分隔，如果不指定文件名会弹出对话框去选择lua文件。取参数参考test.lua示例，此外还有3种模式：
- luaSync 同步执行lua脚本，执行完才返回
- luaAsync 异步执行lua脚本，即开线程去执行，适合有回调需求的脚本
- luaGui 窗口线程里执行lua脚本


Firstly download and install[x64dbg_tol](http://pan.baidu.com/s/1jGgL774) for x64dbg. Set luadir to the directory of lua script in setting dialog of x64dbg\_tol, then you can run command like:
```
lua file(support full path),arg1,arg2,arg3...
```
arguments are seperated by `,`, a dialog will be open to select file if file missing. There are extra three commands to run lua engine:
- luaSync, execut lua script in sync mode
- luaAsync, execut lua script in aync mode(just in another thread), you can register a callback in this mode
- luaGui, execut lua script in gui thread

## Examples说明 Tips
- test 取参数示例，用法：lua test,arg1,arg2。test example show how to get arguments.
- bpv 即x64dbg_tol的bpv功能的lua实现，用法：lua bpv[,start[,end]]  ([]为可选参数)。bpv script implement the same `bpv` functions in x64dbg\_tol.
- F8 单步的lua实现，用法：lua F8。f8 example show how to step over by lua script.
- peb dump当前进程的peb到log窗口，用法：lua peb。peb script show the peb info of debugee process.

## lua脚本编写说明 lua script writing tips
x64dbg_tol插件集成的是luajit，对应lua5.1版本，主要使用其ffi功能，可以很方便地调用C函数。目前x64dbg的函数都是在`include/bridge.lua`和`include/dbg.lua`里，只有几个，其他可以自己添加，欢迎提交pr！ 要特别注意64位lua的number是装不下的，有问题多看示例就知道了:）

luajit has been embeded for its convience `ffi` feature. Plugin SDK APIs of x64dbg are placed in `include/bridge.lua` and `include/dbg.lua`, only few are added, pull request are very welcome!

### 如果觉得有用的话不妨赞助一杯咖啡，支付宝赞助：
![支付宝赞助](https://github.com/lynnux/lynnux.github.io/blob/master/alipay.png)

### 微信赞助
![微信赞助](https://github.com/lynnux/lynnux.github.io/blob/master/weixin.png)
