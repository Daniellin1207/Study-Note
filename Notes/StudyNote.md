# Bug问题记录
如果必须要图文的内容，会放在 技术记录.docx 文件中。

1. 对于github换了公司的电脑提交的时候，默认上传的账号是公司邮箱。因此需要设置  
  git config --global user.email "自己邮箱地址"  
  还可以设置提交的名称，把user.email换成user.name就好了。  
  这个问题导致我这几天的提交都没有显示活跃。
2. python的flask库读取图片需要在特定的static文件夹下，对于渲染的html文件需要在templates文件夹下。  
  应该还有其他的规定，这条以后看到再补充。
3. 关于在Ubuntu系统下的一些便捷操作。
  全屏截图 ==>>    ctrl+print screen实现ubuntu
  窗口截图 ==>>     alt+print screen实现ubuntu
  区域截图 ==>>   shift+print screen实现ubuntu
4. 对git工具的学习  
  对git使用的教程：https://www.liaoxuefeng.com/wiki/896043488029600/900003767775424  
  git指令汇总pdf:  
  https://gitee.com/liaoxuefeng/learn-java/raw/master/teach/git-cheatsheet.pdf
5. gcc/g++与clang/clang++区别
  首先gcc编译c，g++是针对c++，同样的clang是做c，clang++是处理c++。然后gcc支持更多平台，clang是后来发展的，编译效率更高，占用内存更小，但是支持的平台少于gcc所支持的。gcc/g++是几乎所有平台的默认官方编译器。而clang/clang++目前是部分平台的默认编译器。mac os上是默认的clang/clang++。而ubuntu上是默认的gcc/g++。
  gcc/g++ 和 clang/clang++ 都是 Linux 下常用的 C/C++ 编译器。gcc 是 GNU 亲儿子，Ubuntu 等常用发行版标配。clang 是后起之秀，配合 llvm，以优秀的前端闻名于世，现在已经是 Mac（XCode） 的默认编译器，微软等大公司都在往上靠，前景一片光明。知乎上对几个主流编译器的评价：
  （1）前景最好的应该是clang，错误提示/编译速度都是一流。另外现在有很多代码自动完成/提示工具是基于clang的。clang编译出的debug文件已经可以用gdb调试了哈，vs2015也内置了clang来提供对cross platfrom的支持。
  （2）gcc/g++/msvc因为面向了具体的platform，所以老的项目里面可能用了他们自带的扩展/或者在彼此应用环境下有一些best practice，这个没有办法，还得接着用。
6. cmake编译与cmake生成动态库  
  add_library(main1 SHARED main.cc)	// 生成动态库文件  
  add_executable(main main.cc)   // 生成可执行文件
7. vscode简单项目的时候，配置launch.json需要判断有没有必要“preLaunchTask”字段。其中还需要注意的是"program": "${workspaceFolder}/build/test_s"后面的test_s是cmake生成的执行文件，而 ${workspaceFolder} 是根目录地址。
8. vscode要想进行debug，则需要在cmake中设置debug类型：  set(CMAKE_BUILD_TYPE Debug)
9. vscode中向前向后的快捷键名称是go forward和go back.
  File=>Preferences=>Keyboard shortcuts可以设置为：  
  Go Back           ===>>>            alt+leftArrow  
  Go Forward        ===>>>            alt+rightArrow
10. VsCode中配置指定的python版本，在Preferences=>Setting=>搜索python.pythonPath。将python的版本路径更新在此处。
11. python调用so动态库，见图片.
12. cmake多级载入，见图片.
13. 微信小程序开发教程地址:  https://developers.weixin.qq.com/minigame/dev/guide/
14. Android:Local.properties文件被默认更改了，因为本地的sdk路径与ndk路径发生了变化。因此需要对应得更改到正确的路径下。但是默认只更改了sdk的路径，所以还要找到ndk的路径进行更改。
15. Android:在vsCode中使用cmake编译成可执行文件后进行调试。而cmake最简单的语句就是设置cmake的版本（用什么），将什么文件制作到哪里（干什么）。语句分别为：  
  cmake_minimum_required(VERSION 3.4)  
  add_executable(Demo2 TestGcc.cc)
16. docker使用,一般都需要管理员权限  
  a.从远端拉下需要的环境：  
    sudo docker pull centos  
  b.查看当前所有的docker进程：  
    sudo docker ps -a  
  c.运行docker，进入docker环境，最后的/bin/bash应该是固定的：  
    sudo docker run -it centos:latest /bin/bash  
  d.退出docker环境后，在本地提交环境中的修改到重命名的作者或者版本，其中ac是之前修改的docker环境的id，在ps -a中查询：  
    sudo docker commit ac centos:linyili  
  e.查看docker中的所有镜像：  
    sudo docker images  
  f.将docker打包，其中箭头是必要的：  
    sudo docker save centos:linyili >  hello.tar.gz  
  g.将打包好的文件发送到其他计算机后，根据该压缩包载入该docker环境：  
    sudo docker load <  hello.tar.gz  
  h.重新运行指定的环境：  
    sudo docker run -it centos:linyili /bin/bash  
  i.查看之前的指令：  
    history  
17. opencv下载好后，进行cmake编译，make以及make install，具体指令如下：  
  mkdir build  
  cd build  
  cmake ..  
  make -j8  
  sudo make install  
18. 对cmake中如何配置第三方库的讲解：  
  https://blog.csdn.net/ly890700/article/details/72808426  
  include_directories(${INC_DIR})  //加载了include的文件夹  
  link_directories(${LINK_DIR})    //加载了lib的文件夹  
  target_link_libraries(test_boost boost_filesystem    boost_system) //加载了具体的lib文件到test_boost项目中  
19. Linux系统间传输文件使用scp指令，如：  
  - 将文件filename传输到1.1.1.1地址下的linyili用户的/home/Documents位置  
  **scp filename linyili@1.1.1.1:~/Documents**  
  - 将文件夹dirname传输到1.1.1.1地址下的linyili用户的/usr/Documents位置  
  **scp -r dirname linyili@1.1.1.1:/Documents**
20. 获取本地的IP地址，可在终端中使用 **ifconfig**  
21. GDB的入门博客：https://www.jianshu.com/p/30ffc01380a0  
22. g++/gcc使用第三方库:  
  https://blog.csdn.net/arackethis/article/details/43342655  
  分别使用-I是include，-L对应link的文件夹，-l对应link的动态库的文件名。  
  这对Cmake的编写学习应该有指导意义。
23. 打开glfw的演示，证明glfw已经安装成功:  
  https://blog.csdn.net/xyh930929/article/details/83745958
24. 在linux环境编译应用程式或lib的source code时常常会出现如下   的错误讯息：
  **/usr/bin/ld: cannot find -lxxx**  
  参考博客:  https://www.jianshu.com/p/ccaf688f54c0  
  此次遇到的是-lGL没找到，其实是该路径下命名成了libGL.so.1，设置快捷方式：  
  **sudo ln -s libGL.so.1 libGL.so**  
  注意GL都要大写。
25. 在mac中配置OpenGL与在Ubuntu中有差别，Mac版本的见博客：  
  https://blog.csdn.net/sunlin972913894/article/details/102614673  
  在find_package中为OpenGL REQUIRED, 而在地址中均为大写，如：
  **OPENGL_INCLUDE_DIR** , **OPENGL_LIBRARY_DIR**
