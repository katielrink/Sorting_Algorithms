//
// Insertion Sort Algorithm
//

#ifndef INC_22S_PA02_KATIE_INSERTIONSORT_H
#define INC_22S_PA02_KATIE_INSERTIONSORT_H

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>

class InsertionSort {

public:
    InsertionSort(std::string items[], int n);
    InsertionSort(int items[], int n);
private:
    void run(std::string items[], int n);
    void run(int items[], int n);
    void printArray(std::string items[], int n);
    void printArray(int items[], int n);
};


#endif //INC_22S_PA02_KATIE_INSERTIONSORT_H
