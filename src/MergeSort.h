//
// Merge Sort Algorithm
//

#ifndef INC_22S_PA02_KATIE_MERGESORT_H
#define INC_22S_PA02_KATIE_MERGESORT_H

#include <vector>
#include <iostream>

class MergeSort {
public:
    //constructors of strings and ints
    MergeSort(std::string items[], int n);
    MergeSort(int items[], int n);
private:
    //actually execute programs
    void run(std::string items[], int const begin, int const end, int n);
    void run(int items[], int const begin, int const end, int n);

    //helper methods
    void merge(std::string arr[], int const left, int const mid, int const right);
    void merge(int arr[], int const left, int const mid, int const right);

    //print arrays for strings and ints
    void printArray(std::string items[], int n);
    void printArray(int items[], int n);
};


#endif //INC_22S_PA02_KATIE_MERGESORT_H
