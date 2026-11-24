cmake_minimum_required(VERSION 3.22)

project(native_example LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(example SHARED
    src/native.cpp
)

# Replace this target with your own library sources and configuration.
