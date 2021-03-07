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

[软件虚拟机保护分析资料整理](https://www.52pojie.cn/thread-712684-1-1.html)


WinXP SP2 x64: 

- [git-2.10.0](https://github-releases.githubusercontent.com/23216272/7830705c-71bd-11e6-946b-88a3a412ab2f?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAIWNJYAX4CSVEH53A%2F20210307%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210307T092418Z&X-Amz-Expires=300&X-Amz-Signature=7b2554361c380867b550d71f5c91792bc88e773d5477b1a785490330fefe2086&X-Amz-SignedHeaders=host&actor_id=17040287&key_id=0&repo_id=23216272&response-content-disposition=attachment%3B%20filename%3DGit-2.10.0-64-bit.exe&response-content-type=application%2Foctet-stream)
- [smartgit-18.1.5](https://www.syntevo.com/downloads/smartgit/archive/smartgit-win-18_1_5.zip)


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
