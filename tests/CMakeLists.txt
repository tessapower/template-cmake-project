FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.11.0
)

FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

add_executable(myLib_tests myLib_tests.cpp)

target_link_libraries(myLib_tests PRIVATE myLib gtest gtest_main)

add_test(NAME myLib_tests COMMAND myLib_tests)
