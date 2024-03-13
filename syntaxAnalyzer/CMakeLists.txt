cmake_minimum_required(VERSION 3.27)
project(syntaxAnalyzer)

set(CMAKE_CXX_STANDARD 17)

add_executable(syntaxAnalyzer main.cpp
        SyntaxAnalyzer.cpp
        SyntaxAnalyzer.h
)
