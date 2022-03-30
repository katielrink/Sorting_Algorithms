//
// Created by katie on 3/1/2022.
// Combined Insertion and Merge Sort
//

#include "TimeSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"

#include <iostream>

//constructors
TimeSort::TimeSort(std::string items[], int n){
    std::cout << "Running Time Sort...." << std::endl;
    printArray(items, n);
    run(items, n);
    printArray(items, n);
}
TimeSort::TimeSort(int items[], int n){
    std::cout << "Running Time Sort...." << std::endl;
    printArray(items, n);
    run(items, n);
    printArray(items, n);
}

//helper methods
void TimeSort::insertionSort(int arr[], int left, int right){
    for (int i = left + 1; i <= right; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void TimeSort::insertionSort(std::string arr[], int left, int right){
    for (int i = left + 1; i <= right; i++)
    {
        std::string temp = arr[i];
        int j = i - 1;
        while (j >= left && strcmp(temp.c_str(), arr[j].c_str()) <= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void TimeSort::merge(int arr[], int left, int mid, int right){
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
void TimeSort::merge(std::string arr[], int left, int mid, int right){
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

//run statements
void TimeSort::run(std::string items[], int n){
    //sort subarrays of const size
    for(int i=0;i<n;i+=32){
        insertionSort(items, i, std::min((i+32-1), (n-1)));
    }
    //merging for constant size
    for(int size=32;size<n;size=2*size){
        for(int left=0; left<n; left+=2*n){
            int mid = left+size-1;
            int right = std::min((left + 2*size - 1), (n-1));
            if(mid < right)
                merge(items, left, mid, right);
        }
    }
}
void TimeSort::run(int items[], int n){
    //sort subarrays of const size
    for(int i=0;i<n;i+=32){
        insertionSort(items, i, std::min((i+32-1), (n-1)));
    }
    //merging for constant size
    for(int size=32;size<n;size=2*size){
        for(int left=0; left<n; left+=2*n){
            int mid = left+size-1;
            int right = std::min((left + 2*size - 1), (n-1));
            if(mid < right)
                merge(items, left, mid, right);
        }
    }
}

//print functions
void TimeSort::printArray(std::string items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}
void TimeSort::printArray(int items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}