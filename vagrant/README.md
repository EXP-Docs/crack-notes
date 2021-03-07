# vagrant


推荐使用 52pojie 的 XP 虚拟机：https://www.52pojie.cn/thread-341238-1-1.html

> 百度云盘：http://pan.baidu.com/s/1jHBvmp4 密码: g1jk

特点：

1. 集合了目前逆向破解中经常用到的工具，并且已安装好吾爱破解论坛小生我怕怕最新工具包！
2. 修改虚拟机文件，可以躲过目前主流壳虚拟机检测，比如Safengine、VMProtect、ThemIDA等等！
3. 已保存一份原始快照，虚拟系统出现问题可随时还原。
4. 添加了诸多方便逆向的快捷操作 如：鼠标右键 发送到 OllyDbg 等等
5. 还有一些优化不一一赘述，大家可以自行体验，如果需要更多高级工具可以在爱盘下载：http://down.52pojie.cn/Tools/

> 很多工具都过时了，也就第 2 点有点优势，所以一般的壳用自己的 XP 虚拟机也未尝不可




## 迅速搭建本地开发/测试环境
为了使开发人员可以迅速搭建本地的测试环境用于 ansible 脚本编写与 wazuh 相关开发，添加使用 [Vagrant](https://www.vagrantup.com/) 的环境方案。

### 安装
前往 [Vagrant](https://www.vagrantup.com/downloads.html) 与 [VirtualBox](https://www.virtualbox.org/wiki/Downloads) 安装

### 使用
```
# 启动完整的开发/测试环境
vagrant up  

# 按需启动开发/测试环境
vagrant up ${vm_name}

# ssh 进入某一台虚拟机
vagrant ssh ${vm_name}

# 销毁开发/测试环境
vagrant destroy


# 修改配置后重载
vagrant reload
```
