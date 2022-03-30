/*
 *  CS 3353 Program 02 Sorting by Katie Rink
 *  Implement insertion sort, randomized quicksort, merge sort,
 *  shellsort, introsort, and timesort
 *
 *  Test the performance of each algorithm on integer and string best test cases
 *  Verify the upper bounds of each algorithm
 * */

#include "AlgorithmAnalysis.h"
#include <iostream>

int main(int argc, char* argv[]) {

    char* input = argv[1];
    AlgorithmAnalysis("example.txt");

//    if(argc != 2)
//        std::cout << "This program takes the name of an input text file as parameters.\n" <<
//                  "The input file should be located in the input folder.\n" <<
//                  "example: ./src/main Example.txt" << std::endl;
//    else{
//        char* input = argv[1];
//        new AlgorithmAnalysis<class myType>(input);
//    }
    return 0;
}