project(cpu)

add_library(cpu STATIC
	src/dllmain.cpp
)

target_include_directories(cpu PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/src"
)

add_executable(cpu_test
	test/static_properties_tests.cc
)

target_link_libraries(cpu_test
	cpu
	GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(cpu_test)
