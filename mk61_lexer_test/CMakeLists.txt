# mk61_lexer_test

cmake_minimum_required(VERSION 3.10)

project(mk_61_lexer_tests)

enable_testing()

include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/refs/tags/v1.15.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(mk_61_lexer_tests test.cpp)
target_link_libraries(mk_61_lexer_tests PRIVATE gtest_main mk_61_lexer)

include(GoogleTest)
gtest_discover_tests(mk_61_lexer_tests)
