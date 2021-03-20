DarkDe4.exe是DEDE 3.50.4的修改版(超强版:P) by DarkNess0ut

01.修改了Title和ClassName "DeDe"->"DarK",绝大部分的Anti检测都没有用了

02.DIY原DEDE,使得可以反汇编得到非标准程序的Forms格式和Procedures的事件(^_^)

03.直接反汇编功能的选项,原DEDE就提供了
   "When this is checked DeDe will try to load the target and will read some valueable
   information from the new process memory that will be used later on.
   I do recommend this option to be ALWAYS checked! If it is not,DeDe will work little faster,
   but you will not have global var references, no unit inforamati on, DOI engine will work no
   more than 40% of its potential and many more *bad* things."
   Caption = 'Dump extra data and search for obj/prop references'

04.增加对特殊处理过的PACKAGEINFO的Uint List的显示,设定GetSectionIndexByRVA默认返回值是-1or2
   选项在Option->configuration->Preferences->General->
   Not Special Program And PACKAGEINFO,No Warn Saving
   选择,将提供缺省功能;
   不选,则增加对PACKAGEINFO的搜索功能和GetSectionIndexByRVA函数的默认返回值=2.
   (通常应该采用缺省模式,当反汇编有错误或PackageInfo有错时,尝试使用) 
   原有的"Do not allow report to be saved in existing folder"功能,继续保留,借鸡生蛋而已:)
   使用原有english.ini的话,
   选项将显示"Do not allow report to be saved in existing folder",请自行修改
  
05.修改原有的"Open With DEDE"的注册键错误&BUG,可以使用右键运行DEDE反汇编Delphi/BCB

06.去处NAG显示

07.修复原有Dump Active Process的BUG
   可以
     使用Shift+Alt+Ctrl+D Dump Process ->Dump.dmp文件
     使用Shift+Alt+Ctrl+I Dump Info ->procinf_dmp.txt

08.Enable Dump按钮(画蛇添足:P)

09.修复拖放处理程序时,确认对话框的BUG!

10.修复Forms下将DFM保存为RES文件的BUG!

11.Enable Procedures下右键的Analize Class功能

12.修复Forms下DFM的"Open With NotePad"功能

13.heXer提供修复反汇编引擎的代码,修复后,爽歪歪啊:P
   主要是解决了反汇编的错误