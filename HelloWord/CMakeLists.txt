PROJECT(HELLO)

#这里遗留一个问题，要先把添加example目录注释掉，库文件编译了。再把example目录加入，才会编译出.exe文件。要不然会出现
#CMake Error: The following variables are used in this project, but they are set to NOTFOUND.
#Please set them or make sure they are set and tested correctly in the CMake files:
#LIB_DIR
#    linked by target "helloworld" in directory E:/BuildSystem-master/HelloWord/example

#如何让CMAKE先编译库文件，再编译可执行文件？

#ADD_SUBDIRECTORY(src lib)
add_subdirectory(example bin)

#SET(SRC_LIST main.cpp helloworld.cpp)
MESSAGE(STATUS "this is the bin dir." ${HELLO_BINARY_DIR})#编译发生的目录
MESSAGE(STATUS "this is the src dir." ${HELLO_SOURCE_DIR})#项目顶层目录，不是src下的目录
#ADD_EXECUTABLE(hellocmake ${SRC_LIST})