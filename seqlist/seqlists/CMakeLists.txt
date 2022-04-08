cmake_minimum_required(VERSION 3.21)
project(seqlist C)

set(CMAKE_C_STANDARD 11)

include_directories(package)

add_executable(seqlist
        package/myseqlist.c
        package/myseqlist.h
        demo1.c )
