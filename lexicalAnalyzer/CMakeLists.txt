cmake_minimum_required(VERSION 3.27)
project(compilerProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(compilerProject main.cpp
        LexAnalyzer.cpp
        LexAnalyzer.h)
