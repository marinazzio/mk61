project(mk_61_lexer)

add_library(mk_61_lexer STATIC
	src/dllmain.cpp
	src/preprocessor.cpp
)

target_include_directories(mk_61_lexer PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/src"
)

add_executable(mk61_lexer_tests
	test/preprocessor_test.cc
)

target_link_libraries(mk61_lexer_tests
	GTest::gtest_main
	mk_61_lexer
)

include(GoogleTest)
gtest_discover_tests(mk61_lexer_tests)
