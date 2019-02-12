cmake_minimum_required(VERSION 2.8.3)
project(camera)

find_package(catkin REQUIRED COMPONENTS
 message_generation
  cv_bridge
  image_transport
  roscpp
  rospy
  sensor_msgs
  std_msgs
)

find_package(OpenCV REQUIRED)

catkin_package(CATKIN_DEPENDS 
  cv_bridge 
  image_transport 
  roscpp 
  rospy 
  sensor_msgs 
  std_msgs 
  message_runtime
)

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(camera_node
  src/camera_node.cpp
)

target_link_libraries(camera_node
  ${catkin_LIBRARIES}    
  ${OpenCV_LIBS}
)

add_executable(camera_show_node
  src/camera_show_node.cpp
)

target_link_libraries(camera_show_node
  ${catkin_LIBRARIES}    
  ${OpenCV_LIBS}
)
