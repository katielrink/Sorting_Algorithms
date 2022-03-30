cmake_minimum_required(VERSION 3.21)
project(22s_pa02_katie)

set(CMAKE_CXX_STANDARD 14)

set(input01 "input/example.txt")

configure_file(input/example.txt COPYONLY)

add_executable(22s_pa02_katie
        src/main.cpp
        src/AlgorithmAnalysis.h src/AlgorithmAnalysis.cpp
        src/InsertionSort.h src/InsertionSort.cpp
        src/IntroSort.h src/IntroSort.cpp
        src/MergeSort.h src/MergeSort.cpp
        src/QuickSort.h src/QuickSort.cpp
        src/ShellSort.h src/ShellSort.cpp
        src/TimeSort.h src/TimeSort.cpp)