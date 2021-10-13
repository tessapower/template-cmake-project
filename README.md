# Template CMake Project

A template CMake project to use for C++ projects.  Created with the help of 
"[An Introduction to Modern CMake](https://cliutils.gitlab.io/modern-cmake/)".
Feel free to use for your own projects.

- CMake Version: `3.20`
- C++ Standard:  `C++17`
- Testing Framework: `GoogleTest`

When you open the project in your editor, you should see the build
configurations appear (you may need to reload your CMake project).

### Build Configurations

- `myApp`: run the main program
- `myLib_tests`: run the tests for `myLib` (using _GoogleTest_)
- Most of the other build configurations are not necessary for small projects,
but are created by CTest by default.
