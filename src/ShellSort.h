//
// Shell Sort Algorithm
//

#ifndef INC_22S_PA02_KATIE_SHELLSORT_H
#define INC_22S_PA02_KATIE_SHELLSORT_H

#include <vector>
#include <iostream>

class ShellSort {
public:
    ShellSort(std::string items[], int n);
    ShellSort(int items[], int n);
private:
    void run(std::string items[], int n);
    void run(int items[], int n);
    void printArray(std::string items[], int n);
    void printArray(int items[], int n);
};


#endif //INC_22S_PA02_KATIE_SHELLSORT_H
