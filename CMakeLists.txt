cmake_minimum_required(VERSION 3.10)
project(HelloTest)

set(CMAKE_CXX_STANDARD 17)

# Include Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(main main.cpp)
add_executable(tests test.cpp)

# Link tests with GTest and GTestMain (GTestMain provides the main() function)
target_link_libraries(tests GTest::gtest GTest::gtest_main)
