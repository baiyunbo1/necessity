1、qq安装：
链接：https://im.qq.com/linuxqq/download.html

2、百度网盘安装：
链接：https://pan.baidu.com/download/

3、vs code 安装：
链接：https://code.visualstudio.com/

4、Cocomusic安装：
链接：https://github.com/xtuJSer/CoCoMusic/releases

5、ros安装

出现：sudo rosdep inin 不成功

      1、使用如下命令打开在hosts文件

         sudo gedit /etc/hosts

      2、打开后应该可以看见文件中是一些网络配置的语句，在文件末尾添加

       151.101.84.133  raw.githubusercontent.com

       保存后退出，在终端中继续输入 sudo rosdep init


、ubuntu  上传一个github项目：

1、申请github账号
2、ubuntu安装git
3、查看是否有密匙： cd ~/.ssh  
4、生成密匙：ssh-keygen -t rsa  -C "bllove083@outlook.com"
5、打开.ssh文件下的id_rsa.pub，得到key，复制这段密匙
6、点击右角头像位置，选择settings,在选择左一列中的SSH and GPG keys
7、点击 new ssh key
8、在key下面随便取一个名字，将刚才复制的密匙张贴在key里面
9、开始上传自己的代码到github
10、在github上创建一个仓库
11、到你要上传的文件夹下，用终端打开，输入:git init
12、添加本地仓库（当前文件夹）的所有文件：git add .
13、添加评论 :git git commit -m "first commit"

14、清空当前远程origin : git remote rm origin
15、新建仓库名.git  : git remote add origin https://github.com/baiyunbo1/dbscan.git
16、上传代码：git push -u origin master ，如果不行，用这一行代码：git push -u origin +master 


