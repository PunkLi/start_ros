cmake_minimum_required(VERSION 2.8.3)
project(actionlib_demo)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  actionlib
  actionlib_msgs
  roscpp
)


add_action_files(
  FILES
  ReadBook.action
)

generate_messages(
  DEPENDENCIES
  actionlib_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES actionlib_demo
#  CATKIN_DEPENDS actionlib actionlib_msgs roscpp
#  DEPENDS system_lib
)

include_directories(${catkin_INCLUDE_DIRS})

add_executable(read_book_client src/read_book_client.cpp)
add_executable(read_book_server src/read_book_server.cpp)

add_dependencies(read_book_client ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(read_book_server ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

target_link_libraries(read_book_client ${catkin_LIBRARIES})
target_link_libraries(read_book_server ${catkin_LIBRARIES})
