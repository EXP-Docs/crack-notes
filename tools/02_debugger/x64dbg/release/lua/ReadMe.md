## ��װʹ�� Install And Usage
����git clone��������zip��ѹ��ĳ��AĿ¼��
��װ[x64dbg_tol���](http://pan.baidu.com/s/1jGgL774)���ڲ���Ĳ˵�options�Ի���������luadirָ��AĿ¼��
Ȼ����Ϳ�����x64dbg��������������lua�����ˣ�
```
lua �ļ���(֧��ȫ·��),����1,����2,����3...
``` 
������,�ָ��������ָ���ļ����ᵯ���Ի���ȥѡ��lua�ļ���ȡ�����ο�test.luaʾ�������⻹��3��ģʽ��
- luaSync ͬ��ִ��lua�ű���ִ����ŷ���
- luaAsync �첽ִ��lua�ű��������߳�ȥִ�У��ʺ��лص�����Ľű�
- luaGui �����߳���ִ��lua�ű�


Firstly download and install[x64dbg_tol](http://pan.baidu.com/s/1jGgL774) for x64dbg. Set luadir to the directory of lua script in setting dialog of x64dbg\_tol, then you can run command like:
```
lua file(support full path),arg1,arg2,arg3...
```
arguments are seperated by `,`, a dialog will be open to select file if file missing. There are extra three commands to run lua engine:
- luaSync, execut lua script in sync mode
- luaAsync, execut lua script in aync mode(just in another thread), you can register a callback in this mode
- luaGui, execut lua script in gui thread

## Examples˵�� Tips
- test ȡ����ʾ�����÷���lua test,arg1,arg2��test example show how to get arguments.
- bpv ��x64dbg_tol��bpv���ܵ�luaʵ�֣��÷���lua bpv[,start[,end]]  ([]Ϊ��ѡ����)��bpv script implement the same `bpv` functions in x64dbg\_tol.
- F8 ������luaʵ�֣��÷���lua F8��f8 example show how to step over by lua script.
- peb dump��ǰ���̵�peb��log���ڣ��÷���lua peb��peb script show the peb info of debugee process.

## lua�ű���д˵�� lua script writing tips
x64dbg_tol������ɵ���luajit����Ӧlua5.1�汾����Ҫʹ����ffi���ܣ����Ժܷ���ص���C������Ŀǰx64dbg�ĺ���������`include/bridge.lua`��`include/dbg.lua`�ֻ�м��������������Լ���ӣ���ӭ�ύpr�� Ҫ�ر�ע��64λlua��number��װ���µģ�������࿴ʾ����֪����:��

luajit has been embeded for its convience `ffi` feature. Plugin SDK APIs of x64dbg are placed in `include/bridge.lua` and `include/dbg.lua`, only few are added, pull request are very welcome!

### ����������õĻ���������һ�����ȣ�֧����������
![֧��������](https://github.com/lynnux/lynnux.github.io/blob/master/alipay.png)

### ΢������
![΢������](https://github.com/lynnux/lynnux.github.io/blob/master/weixin.png)
