cmake_minimum_required(VERSION 3.21)
project(2-01 C)

set(CMAKE_C_STANDARD 11)

include_directories(package)

add_executable(demo
        ../package/myseqlist.c
        ../package/myseqlist.h
        ../demo1.c )

add_executable(2-01
        ../package/myseqlist.c
        ../package/myseqlist.h
        ./2-01.c )
add_executable(2-02
        ../package/myseqlist.c
        ../package/myseqlist.h
        ./2-02.c)
add_executable(2-03
        ../package/myseqlist.c
        ../package/myseqlist.h
        ./2-03.c)
add_executable(2-04
        ../package/myseqlist.c
        ../package/myseqlist.h
        ./2-04.c)
add_executable(2-05
        ../package/myseqlist.c
        ../package/myseqlist.h
        ./2-05.c)
add_executable(2-06
        ../package/myseqlist.c
        ../package/myseqlist.h
        ./2-06.c)
add_executable(2-07
        ../package/myseqlist.c
        ../package/myseqlist.h
        ./2-07.c)