project(mk_61_lexer)

include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/9ff2450a56aed4f7f124f5104d9e3088bf791ee9.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_library(mk_61_lexer STATIC
	src/dllmain.cpp
	src/Preprocessor.cpp
)

target_include_directories(mk_61_lexer PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

add_executable(mk61_lexer_tests
	test/preprocessor_test.cc
)
target_link_libraries(mk61_lexer_tests
	GTest::gtest_main
	mk_61_lexer
)
include(GoogleTest)
gtest_discover_tests(mk61_lexer_tests)
