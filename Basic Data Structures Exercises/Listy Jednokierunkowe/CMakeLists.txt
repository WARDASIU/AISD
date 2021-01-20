cmake_minimum_required(VERSION 3.15)
project(Listy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Listy "Listy Jednokierunkowe.cpp" cmake-build-debug/elem.cpp cmake-build-debug/elem.h)