## 破解学习笔记

> 仅适用于 WinXP

------

新手破解百问

01、我是新入论坛的萌新,求教如何准确识别到底是哪种壳!
解答：【初学者教程】破解基础知识之认识壳与程序的特征 http://www.52pojie.cn/thread-234739-1-1.html
解答：《吾爱破解培训第一课：破解基础知识之介绍常见工具和壳的特征》，讲师：Hmily，链接：http://www.52pojie.cn/thread-378612-1-1.html
02、为什么我跟着教程脱壳时候来到了Oep(程序入口点),但是不一样! 如:【已解决】xiaomo大大破解教程，按照视频，相同操作，结果却不同 http://www.52pojie.cn/thread-530863-1-1.html
解答：遇到这种问题时候，我们只需要在OllyDbg的反汇编窗口内  右键-分析-删除分析
03、使用脱壳插件 进行Dump出现异常， 提示 内存无法读取
解答：不要用WIN7/WIN8或以上系统进行脱壳，换成论坛的xp虚拟机，原因是ASLR基地址随机化，Dump插件获取的地址不对
04、脱壳时候的地址跟视频里的地址不同
解答：不要用WIN7/WIN8或以上系统进行脱壳，换成论坛的xp虚拟机，原因是ASLR基地址随机化导致地址不同
05、使用异常法脱壳勾除忽略异常后为什么Ollydbg无法暂停
解答：Od插件-StrongOD-Options-Skip Some Some Exceptions 选项勾除，再尝试重新启动OD
06、在XP系统上脱完壳可以运行，到Win7/Win8或以上系统上就无法运行
解答：原因一: IAT未完全修复成功导致,重新修复，不要用脱壳插件，使用LordPE来dump再用ImpREC来修复IAT（不要使用OllyDump来脱壳，老东西bug多，脱完无法运行不计其数）
解答：原因二: 由于ASLR和重定位表的问题，详见 http://www.52pojie.cn/thread-382462-1-1.html
07、脱完壳用Exeinfo PE查壳显示“Unknown Packer-Protector”未知。http://www.52pojie.cn/forum.php?mod=redirect&goto=findpost&ptid=530863&pid=13569609
解答：知道脱完就好了，脱完的vs2008的程序Exenfo PE没能识别出来，但根据它的提示使用它的插件“advance scan”是可以扫描出来的，可以试一下。
08、如何知道是否脱壳成功。
解答：可参考01、简单的说脱完壳后可以正常运行，OEP入口代码为无壳代码特征 ，IAT解密完、资源没有被压缩即可。
09、如何完美脱壳和处理重定位。
解答：转了一些fly的帖子，大家可以参考：
http://www.52pojie.cn/thread-382879-1-1.html
http://www.52pojie.cn/thread-382872-1-1.html
http://www.52pojie.cn/thread-382870-1-1.html
10、关于ximo脱壳教程和论坛虚拟机机中OD使用可能遇到的问题。
解答：OD不要直接在虚拟机的共享文件夹加载文件，请把文件复制到虚拟机磁盘上再进行调试。
11、无法定位程序输入点 NtdllDefWindowProc_A 于动态链接库 user32.dll上
解答：不要用WIN7/WIN8或以上系统进行脱壳，换成论坛的xp虚拟机。
12、用Improtect 修复IAT时候 找不到目标进程
解答：不要用WIN7/WIN8或以上系统进行脱壳，换成论坛的xp虚拟机。 或 http://www.52pojie.cn/thread-542290-1-1.html
13、有的软件载入Ollydbg后，点击单步就卡住
解答：修改od的配置文件Ollydbg.ini，把其中Restore windows的值修改为最小值0或其它。
14、软件载入Ollydbg后与别人停留的地方不一样。
解答：检查Od的配置   选项 > 调试设置  > 事件 > 设置第一次暂停于 > 主模块入口点