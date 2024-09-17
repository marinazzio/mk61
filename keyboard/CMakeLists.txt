project(keyboard)

set(SOURCES
    src/Keyboard.cpp
)

set(HEADERS
    src/Keyboard.h
    src/Instructions.h
    src/KeyPositions.h
)

add_library(keyboard SHARED ${SOURCES} ${HEADERS})
set_target_properties(keyboard PROPERTIES COMPILE_FLAGS "/clr")
target_include_directories(keyboard PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

add_executable(keyboard_test test/keyboard_test.cpp)
set_target_properties(keyboard_test PROPERTIES COMPILE_FLAGS "/clr")
target_link_libraries(keyboard_test keyboard GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(keyboard_test)
