cmake_minimum_required(VERSION 3.27)
project(Huffman_Tree)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Huffman_Tree
        Letter.cpp
        Letter.h
        main.cpp
        Table.cpp
        Table.h)
