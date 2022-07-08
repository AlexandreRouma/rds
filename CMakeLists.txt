cmake_minimum_required(VERSION 3.13)
project(rds)

file(GLOB_RECURSE SRC "src/*.cpp")

add_executable(rds ${SRC})

target_include_directories(rds PRIVATE "src/")
target_compile_options(rds PRIVATE /std:c++17)