cmake_minimum_required(VERSION 3.16)

project(school-manager VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXECUTABLE_OUTPUT_PATH ../../../bin/)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_subdirectory(src/app)
