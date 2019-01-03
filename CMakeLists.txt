cmake_minimum_required(VERSION 3.12)
project(LaEngine)

set(CMAKE_CXX_STANDARD 17)

include_directories(Sources)

file(GLOB_RECURSE ${SOURCES} "*.h" "*.cpp")

add_executable(LaEngine main.cpp ${SOURCES})