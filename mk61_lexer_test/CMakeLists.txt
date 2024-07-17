cmake_minimum_required(VERSION 3.10)

project(MK_61_Lexer_Tests)

enable_testing()

add_executable(mk_61_lexer_tests test.cpp)

include(GoogleTest)
gtest_discover_tests(mk_61_lexer_tests)
