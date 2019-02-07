# gettig start ros

# [Tutorials](http://wiki.ros.org/cn/ROS/Tutorials)
官方良心教程

# [catkin](http://wiki.ros.org/catkin) [overview](http://wiki.ros.org/catkin/conceptual_overview)
Catkin has the following dependencies: [CMake](http://cmake.org/)、[Pythn](http://python.org/)(2.7)、[catkin_pkg](http://www.ros.org/wiki/catkin_pkg)、[empy](http://www.alcyone.com/pyos/empy/)、[nose](https://nose.readthedocs.org/en/latest/)、[GTest](http://code.google.com/p/googletest/)、[g++](http://gcc.gnu.org/)
## [catkin document](http://docs.ros.org/api/catkin/html/)
[C++ catkin library dependencies](https://docs.ros.org/melodic/api/catkin/html/howto/format2/catkin_library_dependencies.html)
[caktin for package](http://wiki.ros.org/catkin/package.xml)
## [catkin command](http://wiki.ros.org/catkin/commands)
[catkin_create_pkg](http://wiki.ros.org/catkin/commands/catkin_create_pkg)
[catkin_make](http://wiki.ros.org/catkin/commands/catkin_make)
[catkin_init_workspace](http://wiki.ros.org/catkin/commands/catkin_init_workspace)


# [catkin workspace](http://wiki.ros.org/catkin/workspaces)
catkin workspace是一套规范：Source Space、Build Space、Development (Devel) Space、Install Space、Result space
## [REP-128](http://www.ros.org/reps/rep-0128.html)
REP-128是catkin workspace的一套命名约定。



# [ros package](http://wiki.ros.org/catkin/package.xml)
创建程序包：[catkin_create_pkg](http://wiki.ros.org/catkin/Tutorials/CreatingPackage)，程序包存在依赖关系。
编译程序包：`source devel/setup.bash`，ref：[安装并配置ROS环境](http://wiki.ros.org/cn/ROS/Tutorials/InstallingandConfiguringROSEnvironment)
## 手动创建

## 依赖管理[rosdep](http://wiki.ros.org/cn/ROS/Tutorials/rosdep)



# [catkin cmakelists](http://wiki.ros.org/catkin/CMakeLists.txt)
详细的cmake规则说明↑
## [REP-127](http://www.ros.org/reps/rep-0127.html)
package.xml定义在REP127
## [REP-140](http://www.ros.org/reps/rep-0140.html)
REP-140是catkin package的一套命名约定。



# [graph resource name](http://wiki.ros.org/Names)
Graph Resource Names are an important mechanism in ROS for providing encapsulation。 
## http://wiki.ros.org/msg
[message description language](http://wiki.ros.org/ROS/Message_Description_Language)
## http://wiki.ros.org/Nodes
[publisher & subscriber](http://wiki.ros.org/cn/ROS/Tutorials/WritingPublisherSubscriber)
## http://wiki.ros.org/srv
[server & client Tutorials](http://wiki.ros.org/cn/ROS/Tutorials/WritingServiceClient)
## faq
[Common step for msg and srv.](http://wiki.ros.org/cn/ROS/Tutorials/CreatingMsgAndSrv)，该step有小问题，主要是因为：
[package format](http://wiki.ros.org/catkin/package.xml#Format_2_.28Recommended.29)，参考[format1迁移format2](https://docs.ros.org/melodic/api/catkin/html/howto/format2/migrating_from_format_1.html#migrating-from-format1-to-format2)

[using class Methods as callback](http://wiki.ros.org/roscpp_tutorials/Tutorials/UsingClassMethodsAsCallbacks)

## .py文件需要对它chmod +x *.py 变为可执行才能run



# [understand](http://wiki.ros.org/cn/ROS/Tutorials/UnderstandingTopics) [ros topic](http://wiki.ros.org/rostopic)
节点之间是通过ROS话题来互相通信的。node在一个topic上发布（publish）msg，而其他node则订阅（subscribe）该topic以接收该msg.
进阶：http://wiki.ros.org/rospy/Overview/Publishers%20and%20Subscribers#rospy.Publisher_initialization
## [rqt_graph](http://wiki.ros.org/rqt_graph)
一个几乎没啥功能的图形化界面，显示框图、线条的粗细颜色表示通信数据流量和延迟。可以保存各种图片格式，便于梳理机器人代码结构。
## [rxplot](http://wiki.ros.org/rxplot)
一个plot UI，可以显示波形，和rqt_graph差不多。



# [ros service](http://wiki.ros.org/cn/ROS/Tutorials/UnderstandingServicesParams)
服务（services）是节点之间通讯的另一种方式。服务允许节点发送请求（request） 并获得一个响应（response）.
## using rosparam
rosparam使得我们能够存储并操作ROS 参数服务器（Parameter Server）上的数据。参数服务器能够存储整型、浮点、布尔、字符串、字典和列表等数据类型。rosparam使用YAML标记语言的语法。


# [actionlib](http://wiki.ros.org/actionlib)
actionlib就是带feedback的srv，but基于msg，原理描述：http://wiki.ros.org/actionlib/DetailedDescription


# [ros console](http://wiki.ros.org/rosconsole)
编写node、server、client，API，such as ROS_INFO：http://wiki.ros.org/roscpp_tutorials
## [Writing a Simple Publisher and Subscriber](http://wiki.ros.org/roscpp_tutorials/Tutorials/WritingPublisherSubscriber)
## [Writing a Simple Service and Client](http://wiki.ros.org/roscpp_tutorials/Tutorials/WritingServiceClient)
## [Using Parameters in roscpp](http://wiki.ros.org/roscpp_tutorials/Tutorials/Parameters)
## [Accessing Private Names from a NodeHandle](http://wiki.ros.org/roscpp_tutorials/Tutorials/AccessingPrivateNamesWithNodeHandle)
## [Using Class Methods as Callbacks](http://wiki.ros.org/roscpp_tutorials/Tutorials/UsingClassMethodsAsCallbacks)
## [Understanding Timers](http://wiki.ros.org/roscpp_tutorials/Tutorials/Timers)
## [Dynamic Reconfigure](http://wiki.ros.org/roscpp_tutorials/Tutorials/Publisher%20and%20Subscriber%20with%20Parameters%20and%20Dynamic%20Reconfigure)
## [clock](http://wiki.ros.org/Clock)



# [ros launch](http://wiki.ros.org/roslaunch)
ros launch可以启动多个node，有固定文件写法。
进阶：http://wiki.ros.org/cn/ROS/Tutorials/Roslaunch%20tips%20for%20larger%20projects


# [ros bash](http://wiki.ros.org/rosbash)
这里是各种ROS的bash指令，参考[ROS文件系统介绍](http://wiki.ros.org/cn/ROS/Tutorials/NavigatingTheFilesystem)
rosed 是 rosbash 的一部分。利用它可以直接通过package名来获取到待编辑的文件而无需指定该文件的存储路径了。



# [debugging](http://wiki.ros.org/cn/ROS/Tutorials/UsingRqtconsoleRoslaunch)
## [ros record](http://wiki.ros.org/cn/ROS/Tutorials/Recording)
## [ros wtf](http://wiki.ros.org/roswtf)
## [rqt_console](http://wiki.ros.org/rqt_console)
rqt_console属于ROS日志框架(logging framework)的一部分，用来显示节点的输出信息。
## [rqt_logger_level](http://wiki.ros.org/rqt_logger_level)
rqt_logger_level允许我们修改节点运行时输出信息的日志等级（logger levels）（包括 DEBUG、WARN、INFO和ERROR）。


# master and newwork
## ros core
如果 roscore 运行后无法正常初始化，很有可能是存在网络配置问题。
如果 roscore 不能初始化并提示缺少权限，这可能是因为~/.ros文件夹归属于root

运行类似于rosnode的指令时出现一些问题,也许是环境变量的影响。

## [ros out](http://wiki.ros.org/rosout)
## [network setup](http://wiki.ros.org/ROS/NetworkSetup#Single_machine_configuration)
## [multiple machines](http://wiki.ros.org/cn/ROS/Tutorials/MultipleMachines)



# [ros tf](http://wiki.ros.org/tf) [Introduction](http://wiki.ros.org/tf/Tutorials/Introduction%20to%20tf)

[TF Tutorials](http://wiki.ros.org/tf/Tutorials)

## tf API
数据类型：http://wiki.ros.org/tf/Overview/Data%20Types
变换与参考系：http://wiki.ros.org/tf/Overview/Transformations
发布tf变换广播：http://wiki.ros.org/tf/Overview/Broadcasting%20Transforms
接收并使用tf广播：http://wiki.ros.org/tf/Overview/Using%20Published%20Transforms
异常：http://wiki.ros.org/tf/Overview/Exceptions


## tf_monitor

## tf_echo

## static_transform_publisher

## view_frames

[详解tf](https://blog.csdn.net/zhanghm1995/article/details/84644984)

# [ros navigation](http://wiki.ros.org/navigation)

frist：sudo apt-get install ros-kinetic-navigation
tutorial：https://www.ncnynl.com/category/ros-navigation/

https://www.ros.org/reps/rep-0105.html



# [rviz](http://wiki.ros.org/rviz) [user guide](http://wiki.ros.org/rviz/UserGuide)

http://wiki.ros.org/rviz/DisplayTypes/Marker
http://docs.ros.org/api/visualization_msgs/html/msg/Marker.html
https://github.com/PickNikRobotics/rviz_visual_tools

# [gazebo](http://gazebosim.org/)

# [v-rep](http://www.coppeliarobotics.com/helpFiles/index.html)


# simulator
rviz是三维可视化工具，强调把已有的数据可视化显示；
gazebo是三维物理仿真平台，强调的是创建一个虚拟的仿真环境。http://gazebosim.org/

used ML for simulator http://www.mujoco.org/ 