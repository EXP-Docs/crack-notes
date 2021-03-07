# reverse-engineering-vagrant



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
