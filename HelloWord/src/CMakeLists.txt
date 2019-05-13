
SET(SRC_LIST helloworld.cpp)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_library(hello SHARED ${SRC_LIST})
add_library(hello_static STATIC ${SRC_LIST})
SET_TARGET_PROPERTIES(hello_static PROPERTIES OUTPUT_NAME "hello") 