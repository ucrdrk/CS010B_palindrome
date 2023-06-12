cmake_minimum_required(VERSION 3.13)  # CMake version check

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(palindrome)

find_package(GTest REQUIRED)

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES  main.cpp src/palindrome.cpp)

include_directories(include/)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(palindrome ${SOURCE_FILES})


enable_testing()

add_executable(
  palindrome_test
  test/palindrome_test.cpp src/palindrome.cpp
)

target_link_libraries(
  palindrome_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(palindrome_test)
