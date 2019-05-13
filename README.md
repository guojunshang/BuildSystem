# BuildSystem
BuildSystem

项目构建系统的相关知识和学习材料


#set(SRC_LIST main.cpp)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
include_directories(E:/Project/CMake/HelloWord/src)

link_directories(E:/Project/CMake/HelloWord/build/build/Debug)#把这个问题搞清楚哦 2019.5.13

target_link_libraries(helloworld hello.lib)

add_executable(helloworld main.cpp)
