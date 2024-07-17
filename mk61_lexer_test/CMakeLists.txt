cmake_minimum_required(VERSION 3.10)

project(MK_61_Lexer_Tests)

enable_testing()

include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/refs/tags/v1.15.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(mk_61_lexer_tests test.cpp)
target_link_libraries(mk_61_lexer_tests PRIVATE gtest_main MK_61_Lexer)

include(GoogleTest)
gtest_discover_tests(mk_61_lexer_tests)
