cmake_minimum_required(VERSION 3.25)
project(Books)

set(CMAKE_CXX_STANDARD 17)

add_executable(Books main.cpp Book.h Author.h Date.h Books.h)
