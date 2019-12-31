接下来尽可能用文本记录所有的Debug问题。如果必须要图文的内容，会放在 技术记录.docx 文件中。
1.对于github换了公司的电脑提交的时候，默认上传的账号是公司邮箱。因此需要设置 
  git config --global user.email "自己邮箱地址"
  还可以设置提交的名称，把user.email换成user.name就好了
  这个问题导致我这几天的提交都没有显示活跃。
2.python的flask库读取图片需要在特定的static文件夹下，对于渲染的html文件需要在templates文件夹下。
  应该还有其他的规定，这条以后看到再补充。
3.关于在Ubuntu系统下的一些便捷操作。
  全屏截图 ==>>    ctrl+print screen实现ubuntu
  窗口截图 ==>>     alt+print screen实现ubuntu
  区域截图 ==>>   shift+print screen实现ubuntu
4.对git工具的学习
  对git使用的教程：https://www.liaoxuefeng.com/wiki/896043488029600/900003767775424
  git指令汇总pdf：https://gitee.com/liaoxuefeng/learn-java/raw/master/teach/git-cheatsheet.pdf
5.gcc/g++与clang/clang++区别
  首先gcc编译c，g++是针对c++，同样的clang是做c，clang++是处理c++。然后gcc支持更多平台，clang是后来发展的，编译效率更高，占用内存更小，但是支持的平台少于gcc所支持的。gcc/g++是几乎所有平台的默认官方编译器。而clang/clang++目前是部分平台的默认编译器。mac os上是默认的clang/clang++。而ubuntu上是默认的gcc/g++。
  gcc/g++ 和 clang/clang++ 都是 Linux 下常用的 C/C++ 编译器。gcc 是 GNU 亲儿子，Ubuntu 等常用发行版标配。clang 是后起之秀，配合 llvm，以优秀的前端闻名于世，现在已经是 Mac（XCode） 的默认编译器，微软等大公司都在往上靠，前景一片光明。知乎上对几个主流编译器的评价：
  （1）前景最好的应该是clang，错误提示/编译速度都是一流。另外现在有很多代码自动完成/提示工具是基于clang的。clang编译出的debug文件已经可以用gdb调试了哈，vs2015也内置了clang来提供对cross platfrom的支持。
  （2）gcc/g++/msvc因为面向了具体的platform，所以老的项目里面可能用了他们自带的扩展/或者在彼此应用环境下有一些best practice，这个没有办法，还得接着用。
6.cmake编译与cmake生成动态库
  add_library(main1 SHARED main.cc)	// 生成动态库文件
  add_executable(main main.cc)   // 生成可执行文件
7.vscode简单项目的时候，配置launch.json需要判断有没有必要“preLaunchTask”字段。其中还需要注意的是"program": "${workspaceFolder}/build/test_s"后面的test_s是cmake生成的执行文件，而 ${workspaceFolder} 是根目录地址。
8.vscode要想进行debug，则需要在cmake中设置debug类型：set(CMAKE_BUILD_TYPE Debug)
9.vscode中向前向后的快捷键名称是go forward和go back.
  File=>Preferences=>Keyboard shortcuts可以设置为：
  Go Back           ===>>>            alt+leftArrow
  Go Forward        ===>>>            alt+rightArrow
10.VsCode中配置指定的python版本，在Preferences=>Setting=>搜索python.pythonPath。将python的版本路径更新在此处。
11.python调用so动态库，见图片.
12.cmake多级载入，见图片.
13.微信小程序开发教程地址:https://developers.weixin.qq.com/minigame/dev/guide/
14.

 1206  git pull
 1207  git revert
 1208  git revert .
 1209  git reset
 1210  git reset -f
 1211  git reset --hard
 1212  docker
 1213  sudo apt install docker.io
 1214  docker
 1215  docker pull centos
 1216  sudo docker pull centos
 1217  docker ps -a
 1218  sudo docker ps -a
 1219  sudo docker run -it centos:latest /bin/bash
 1220  sudo docker ps -a
 1221  sudo docker commit ac centos:linyili
 1222  sudo docker ps -a
 1223  sudo docker ps images
 1224  sudo docker images
 1225  sudo docker save centos:linyili >  hello.tar.gz
 1226  sudo docker load <  hello.tar.gz
 1227  sudo docker run -it centos:linyili /bin/bash
 1228  history
