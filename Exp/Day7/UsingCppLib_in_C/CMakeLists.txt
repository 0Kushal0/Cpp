cmake_minimum_required(VERSION 3.28)

project(UsingCppLin_in_C)

add_library(print SHARED print.cpp)

add_executable(a.out main.c)

target_link_libraries(a.out print)