set(SRC_LIST main.cpp) 

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin) 
include_directories(E:/BuildSystem-master/HelloWord/src)
find_library(LIB_DIR hello.lib E:/BuildSystem-master/HelloWord/build/lib/Debug)

add_executable(helloworld ${SRC_LIST})

target_link_libraries(helloworld ${LIB_DIR})
