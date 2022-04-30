cmake_minimum_required(VERSION 3.22)
project(CheckPrime C)

set(CMAKE_C_STANDARD 99)

add_executable(CheckPrime main.c)

target_link_libraries(${PROJECT_NAME} m)
