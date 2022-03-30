//
// Created by katie on 3/1/2022.
//
#include "InsertionSort.h"

#include <iostream>
#include <stdio.h>
#include <string.h>

//constructors
InsertionSort::InsertionSort(std::string items[], int n){
    std::cout << "Running Insertion Sort...." << std::endl;
    run(items, n);
}
InsertionSort::InsertionSort(int items[], int n){
    std::cout << "Running Insertion Sort...." << std::endl;
    run(items, n);
}

//run statements
void InsertionSort::run(std::string items[], int n){
    printArray(items, n);

    int i, j;
    std::string temp;
    for(int i=1; i<n;i++){
        temp = items[i];
        j = i-1;

        //move elements before that are greater one position ahead
        while(j >= 0 && strcmp(temp.c_str(), items[j].c_str()) < 0){
            items[j+1] = items[j];
            j--;
        }
        items[j+1] = temp;
    }

    printArray(items, n);
}
void InsertionSort::run(int items[], int n){
    printArray(items, n);

    int i, j;
    int temp;
    for(int i=1; i<n;i++){
        temp = items[i];
        j = i-1;

        //move elements before that are greater one position ahead
        while(j >= 0 && items[j] > temp){
            items[j+1] = items[j];
            j--;
        }
        items[j+1] = temp;
    }

    printArray(items, n);
}

//print functions
void InsertionSort::printArray(std::string items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}
void InsertionSort::printArray(int items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}