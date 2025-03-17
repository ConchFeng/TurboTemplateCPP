add_executable(tests test_main.cpp)

find_package(GTest REQUIRED)
include_directories(${GTest_INCLUDE_DIRS})
target_link_libraries(tests PRIVATE GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)
