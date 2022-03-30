//
// Created by katie on 3/1/2022.
//
#include "MergeSort.h"

#include <iostream>
#include <string.h>

//constructors for strings and ints
//execute run
MergeSort::MergeSort(std::string items[], int n){
    std::cout << "Running Merge Sort...." << std::endl;
    printArray(items, n);
    run(items, 0, n-1, n);
    printArray(items, n);
}
MergeSort::MergeSort(int items[], int n){
    std::cout << "Running Merge Sort...." << std::endl;
    printArray(items, n);
    run(items, 0, n-1, n);
    printArray(items, n);
}

//run statements
void MergeSort::run(std::string items[], int const begin, int const end, int n){
    if(begin >= end)
        return;
    auto mid = begin + (end-begin) / 2;
    run(items, begin, mid, n);
    run(items, mid+1, end, n);
    merge(items, begin, mid, end);
}
void MergeSort::run(int items[], int const begin, int const end, int n){
    if(begin >= end)
        return;
    auto mid = begin + (end-begin) / 2;
    run(items, begin, mid, n);
    run(items, mid+1, end, n);
    merge(items, begin, mid, end);
}

//Merge methods to combine two arrays
void MergeSort::merge(std::string arr[], int const left, int const mid, int const right){
    auto const subArrOne = mid - left + 1;
    auto const subArrTwo = right - mid;

    //create temporary arrays
    auto *leftArray = new std::string[subArrOne];
    auto *rightArray = new std::string[subArrTwo];

    //Copy data to temp arrays
    for(auto i=0;i<subArrOne;i++)
        leftArray[i] = arr[left+i];
    for(auto j=0;j<subArrTwo;j++)
        rightArray[j] = arr[mid+1+j];

    int indexArrOne = 0;
    int indexArrTwo = 0;
    int indexMerge = left;

    //Merge temp arrays back into array
    while(indexArrOne < subArrOne && indexArrTwo < subArrTwo){
        if(strcmp(leftArray[indexArrOne].c_str(), rightArray[indexArrTwo].c_str()) <= 0){
            arr[indexMerge] = leftArray[indexArrOne];
            indexArrOne=indexArrOne+1;
        } else {
            arr[indexMerge] = rightArray[indexArrTwo];
            indexArrTwo=indexArrTwo+1;
        }
        indexMerge++;
    }

    //copy remaining elements of array
    while(indexArrOne < subArrOne){
        arr[indexMerge] = leftArray[indexArrOne];
        indexArrOne++;
        indexMerge++;
    }
    while(indexArrTwo < subArrTwo){
        arr[indexMerge] = rightArray[indexArrTwo];
        indexArrTwo++;
        indexMerge++;
    }
}
void MergeSort::merge(int arr[], int const left, int const mid, int const right){
    auto const subArrOne = mid - left + 1;
    auto const subArrTwo = right - mid;

    //create temporary arrays
    auto *leftArray = new int[subArrOne];
    auto *rightArray = new int[subArrTwo];

    //Copy data to temp arrays
    for(auto i=0;i<subArrOne;i++)
        leftArray[i] = arr[left+i];
    for(auto j=0;j<subArrTwo;j++)
        rightArray[j] = arr[mid+1+j];

    auto indexArrOne = 0;
    auto indexArrTwo = 0;
    int indexMerge = left;

    //Merge temp arrays back into array
    while(indexArrOne < subArrOne && indexArrTwo < subArrTwo){
        if(leftArray[indexArrOne] <= rightArray[indexArrTwo]){
            arr[indexMerge] = leftArray[indexArrOne];
            indexArrOne++;
        } else {
            arr[indexMerge] = rightArray[indexArrTwo];
            indexArrTwo++;
        }
        indexMerge++;
    }

    //copy remaining elements of array
    while(indexArrOne < subArrOne){
        arr[indexMerge] = leftArray[indexArrOne];
        indexArrOne++;
        indexMerge++;
    }
    while(indexArrTwo < subArrTwo){
        arr[indexMerge] = rightArray[indexArrTwo];
        indexArrTwo++;
        indexMerge++;
    }
}


//print functions for strings and ints
void MergeSort::printArray(std::string items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}
void MergeSort::printArray(int items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}