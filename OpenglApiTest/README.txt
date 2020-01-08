sudo apt-get install build-essential libgl1-mesa-dev
sudo apt-get install freeglut3-dev
sudo apt-get install libglew-dev libsdl2-dev libsdl2-image-dev libglm-dev libfreetype6-dev

安装了必要的库文件后，cmake项目仍然可能ubuntu缺少libGL.so
apt-file search libGL.so
找到是那个安装包里含有,然后apt-get install package
需要先 #apt-get install apt-file    #apt-file update 

$ sudo rm /usr/lib/x86_64-linux-gnu/libGL.so
$ sudo ln -s /usr/lib/libGL.so.1 /usr/lib/x86_64-linux-gnu/libGL.so