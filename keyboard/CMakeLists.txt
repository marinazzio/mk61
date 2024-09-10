project(keyboard)

add_library(keyboard STATIC src/keyboard.cpp)

target_include_directories(keyboard PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

add_executable(keyboard_test test/keyboard_test.cpp)

target_link_libraries(keyboard_test keyboard GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(keyboard_test)
