PROJECT(HELLO)

ADD_SUBDIRECTORY(src bin)

#SET(SRC_LIST main.cpp helloworld.cpp)
MESSAGE(STATUS "this is the bin dir." ${HELLO_BINARY_DIR})#编译发生的目录
MESSAGE(STATUS "this is the src dir." ${HELLO_SOURCE_DIR})#项目顶层目录，不是src下的目录
#ADD_EXECUTABLE(hellocmake ${SRC_LIST})