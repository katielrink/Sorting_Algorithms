//
// Intro Sort Algorithm
//

#ifndef INC_22S_PA02_KATIE_INTROSORT_H
#define INC_22S_PA02_KATIE_INTROSORT_H

#include <vector>
#include <iostream>

class IntroSort {
public:
    //constructor methods
    IntroSort(std::string items[], int n);
    IntroSort(int items[], int n);
private:
    //helper methods
    void insertionsort(int arr[], int n);
    void insertionsort(std::string arr[], int n);
    int partition(int arr[], int start, int end);
    int partition(std::string arr[], int start, int end);
    void heapSort(int arr[], int n);
    void heapify(int arr[], int n, int i);
    void heapSort(std::string arr[], int n);
    void heapify(std::string arry[], int n, int i);

    //run sort algorithms
    void run(std::string items[], std::string *begin, std::string *end, int maxdepth, int n);
    void run(int items[], int *begin, int *end, int maxdepth, int n);
    //print array contents
    void printArray(std::string items[], int n);
    void printArray(int items[], int n);
};


#endif //INC_22S_PA02_KATIE_INTROSORT_H
