//
// Created by katie on 3/1/2022.
//

#include "QuickSort.h"

#include <iostream>
#include <string.h>

//constructors
QuickSort::QuickSort(std::string items[], int n){
    srand(time(NULL));
    std::cout << "Running Quick Sort...." << std::endl;
    printArray(items, n);
    run(items, 0, n-1);
    printArray(items, n);
}
QuickSort::QuickSort(int items[], int n){
    srand(time(NULL));
    std::cout << "Running Quick Sort...." << std::endl;
    printArray(items, n);
    run(items, 0, n-1);
    printArray(items, n);
}

//helper methods

//This function takes all the elements smaller than pivot to left of pivot
//all elements greater than pivot are placed to right
//the pivot is selected at random
int QuickSort::partition(int arr[], int low, int high){
    //create a random pivot
    int pvt, n, temp;
    n = rand();
    pvt = low + n%(high-low+1);
    temp = arr[high];
    arr[high] = arr[pvt];
    arr[pvt] = temp;

    int pivot = arr[high];
    //Index of smaller element
    int index = (low - 1);

    for(int i=low;i<=high-1;i++){
        //check if current element is smaller than the pivot
        if(arr[i] <= pivot){
            index++;
            //swap elements in array
            temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
        }
    }
    //swap elements in array
    temp = arr[index+1];
    arr[index+1] = arr[high];
    arr[high] = temp;
    return (index+1);
}

int QuickSort::partition(std::string arr[], int low, int high){
    //create a random pivot
    int pvt, n;
    std::string temp;
    n = rand();
    pvt = low + n%(high-low+1);
    temp = arr[high];
    arr[high] = arr[pvt];
    arr[pvt] = temp;

    std::string pivot = arr[high];
    //Index of smaller element
    int index = (low - 1);

    for(int i=low;i<=high-1;i++){
        //check if current element is smaller than the pivot
        if(strcmp(arr[i].c_str(), pivot.c_str()) <= 0){
            index++;
            //swap elements in array
            temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
        }
    }
    //swap elements in array
    temp = arr[index+1];
    arr[index+1] = arr[high];
    arr[high] = temp;
    return (index+1);
}

//run statements
void QuickSort::run(std::string items[], int start, int end){
    if(start < end){
        int part = partition(items, start, end);

        //separate sort elements before partition and after
        run(items, start, part-1);
        run(items, start+1, end);
    }
}
void QuickSort::run(int items[], int start, int end){
    if(start < end){
        int part = partition(items, start, end);

        //separate sort elements before partition and after
        run(items, start, part-1);
        run(items, start+1, end);
    }
}

//print functions
void QuickSort::printArray(std::string items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}
void QuickSort::printArray(int items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}