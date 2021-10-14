# Template CMake Project

This is my standard template CMake project to use for C++ projects. I created 
this so I don't need to always start from scratch each time I create a new C++ 
project. This template consists of a library `my_lib` and a basic entry point, 
`my_app.cpp`, that makes use of it. All functionality is contained within 
`my_lib` to make it easy to test. Tests for `my_lib` functionality are found in 
the `tests` directory.

### Directory Structure

```text
.
├── app
│   ├── CMakeLists.txt
│   └── my_app.cpp
├── cmake-build-debug
├── CMakeLists.txt
├── include
│   └── my_lib
│       └── my_lib.h
├── README.md
├── src
│   ├── CMakeLists.txt
│   └── my_lib
│       └── my_lib.cpp
└── tests
    ├── addition_tests.cpp
    ├── CMakeLists.txt
    └── subtraction_tests.cpp
```

Each directory (except for `include`) contains a `CMakeLists.txt` that takes 
care of structuring and linking its files together to be used by the rest of 
the project. The `CMakeLists.txt` in the root directory takes care of including
these subdirectories as part of the project.

The structure and layout was derived from 
"[An Introduction to Modern CMake](https://cliutils.gitlab.io/modern-cmake/)".

- CMake Version: `3.20`
- C++ Standard:  `C++17`
- Testing Framework: `GoogleTest`

### Build Configurations

- `my_app`: run the main program
- `All Ctest`: run the tests for `my_lib` (using _GoogleTest_)
- Most of the other build configurations are not necessary for small projects,
but are created by CTest by default.

Feel free to use :)
