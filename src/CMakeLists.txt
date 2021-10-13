set(MYLIB_HEADERS "${template_cmake_project_SOURCE_DIR}/include/myLib/myLib.h")
add_library(myLib STATIC myLib/myLib.cpp ${MYLIB_HEADERS})
target_include_directories(myLib PUBLIC ../include)
target_include_directories(myLib PRIVATE ../include/myLib)
