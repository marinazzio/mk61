# Solution

cmake_minimum_required(VERSION 3.14)
project(MK_61 VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

enable_testing()
find_package(GTest CONFIG REQUIRED)

include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/9ff2450a56aed4f7f124f5104d9e3088bf791ee9.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(cpu)
add_subdirectory(keyboard)
add_subdirectory(mk61_lexer)
