cmake_minimum_required(VERSION 3.24)
project(templates)

set(CMAKE_CXX_STANDARD 20)

# Standard Targets
add_executable(main src/main.cpp)


# Testing Targets
add_executable(template_test test/templates_test.cpp)
target_include_directories(template_test PRIVATE src)

Include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.0.1
)
FetchContent_MakeAvailable(Catch2)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)

target_link_libraries(template_test PRIVATE Catch2::Catch2WithMain)
