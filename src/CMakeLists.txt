cmake_minimum_required(VERSION 3.10)
project(fixed_source)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Recursively find all .cpp (or .c) files
file(GLOB_RECURSE SRC_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
#    "${CMAKE_CURRENT_SOURCE_DIR}/*.c"
)

# Define the executable
find_package(ZLIB REQUIRED)
add_executable(${PROJECT_NAME} ${SRC_FILES})
target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/fixed
    ${CMAKE_CURRENT_SOURCE_DIR}/fstapi
)
target_link_libraries(${PROJECT_NAME} PRIVATE ZLIB::ZLIB lz4)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
elseif (MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4)
endif()
