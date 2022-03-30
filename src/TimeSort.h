//
// Time Sort Algorithm
//

#ifndef INC_22S_PA02_KATIE_TIMESORT_H
#define INC_22S_PA02_KATIE_TIMESORT_H

#include <vector>
#include <iostream>

class TimeSort {
public:
    //constructors
    TimeSort(std::string items[], int n);
    TimeSort(int items[], int n);
private:
    //helper methods
    void insertionSort(int arr[], int left, int right);
    void insertionSort(std::string arr[], int left, int right);
    void merge(int arr[], int l, int m, int r);
    void merge(std::string arr[], int l, int m, int r);
    //run sorts
    void run(std::string items[], int n);
    void run(int items[], int n);
    //print array
    void printArray(std::string items[], int n);
    void printArray(int items[], int n);
};


#endif //INC_22S_PA02_KATIE_TIMESORT_H
