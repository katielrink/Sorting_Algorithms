//
// Quick Sort Algorithm
//

#ifndef INC_22S_PA02_KATIE_QUICKSORT_H
#define INC_22S_PA02_KATIE_QUICKSORT_H

#include <vector>
#include <iostream>

class QuickSort {
public:
    //constructors
    QuickSort(std::string items[], int n);
    QuickSort(int items[], int n);
private:
    //execution of sorts
    void run(std::string items[], int, int);
    void run(int items[], int, int);

    //helper functions
    int partition(int arr[], int, int);
    int partition(std::string arr[], int, int);

    //print contents of array
    void printArray(std::string items[], int n);
    void printArray(int items[], int n);
};


#endif //INC_22S_PA02_KATIE_QUICKSORT_H
