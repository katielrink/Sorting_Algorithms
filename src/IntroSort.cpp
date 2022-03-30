//
// Created by katie on 3/1/2022.
//
#include "IntroSort.h"
#include "InsertionSort.h"

#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <string.h>


//constructors
IntroSort::IntroSort(std::string items[], int n){
    std::cout << "Running Intro Sort...." << std::endl;
    printArray(items, n);
    int maxdepth = std::log(n)*2;
    run(items, items, items+n-1, maxdepth, n);
    printArray(items, n);
}
IntroSort::IntroSort(int items[], int n){
    std::cout << "Running Intro Sort...." << std::endl;
    printArray(items, n);
    int maxdepth = std::log(n)*2;
    run(items, items, items+n-1, maxdepth, n);
    printArray(items, n);
}

//helper methods
void IntroSort::insertionsort(int arr[], int n){
    int i, j;
    int temp;
    for(int i=1; i<n;i++){
        temp = arr[i];
        j = i-1;

        //move elements before that are greater one position ahead
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void IntroSort::insertionsort(std::string arr[], int n){
    int i, j;
    std::string temp;
    for(int i=1; i<n;i++){
        temp = arr[i];
        j = i-1;

        //move elements before that are greater one position ahead
        while(j >= 0 && strcmp(temp.c_str(), arr[j].c_str()) < 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int IntroSort::partition(int arr[], int low, int high){
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
int IntroSort::partition(std::string arr[], int low, int high){
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
void IntroSort::heapSort(int arr[], int n){
    //build heap
    for(int i=n/2-1;i>=0;i--)
        heapify(arr, n, i);
    //extract elements from heap
    for(int i=n-1;i>0;i--){
        //swap elements
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        //reduce heap
        heapify(arr, i, 0);
    }
}
void IntroSort::heapify(int arr[], int n, int i){
    //largest is root
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    //check if left child is larger
    if(left < n && arr[left] > arr[largest])
        largest = left;

    //check if right child is larger
    if(right < n && arr[right] > arr[largest])
        largest = right;

    if(largest != i){
        //swap items in array
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr,n,largest);
    }
}
void IntroSort::heapSort(std::string arr[], int n){
    //build heap
    for(int i=n/2-1;i>=0;i--)
        heapify(arr, n, i);
    //extract elements from heap
    for(int i=n-1;i>0;i--){
        //swap elements
        std::string temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        //reduce heap
        heapify(arr, i, 0);
    }
}
void IntroSort::heapify(std::string arr[], int n, int i){
    //largest is root
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    //check if left child is larger
    if(left < n && strcmp(arr[left].c_str(), arr[largest].c_str()) > 0)
        largest = left;

    //check if right child is larger
    if(right < n && strcmp(arr[right].c_str(), arr[largest].c_str()) > 0)
        largest = right;

    if(largest != i){
        //swap items in array
        std::string temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr,n,largest);
    }
}

//run sort algorithms
void IntroSort::run(std::string items[], std::string *begin, std::string *end, int maxdepth, int n){
    // perform insertion sort if partition size is 16 or smaller
    if ((end - begin) < 16) {
        insertionsort(items, n);
    }
        // perform heapsort if the maximum depth is 0
    else if (maxdepth == 0) {
        heapSort(items,n);
    }
    else {
        // otherwise, perform Quicksort
        int pivot = partition(items, begin - items, end - items);
        run(items, begin, items + pivot - 1, maxdepth - 1, n);
        run(items, items + pivot + 1, end, maxdepth - 1, n);
    }
}
void IntroSort::run(int items[], int *begin, int *end, int maxdepth, int n){
    // perform insertion sort if partition size is 16 or smaller
    if ((end - begin) < 16) {
        insertionsort(items, n);
    }
        // perform heapsort if the maximum depth is 0
    else if (maxdepth == 0) {
        heapSort(items, n);
    }
    else {
        // otherwise, perform Quicksort
        int pivot = partition(items, begin - items, end - items);
        run(items, begin, items + pivot - 1, maxdepth - 1, n);
        run(items, items + pivot + 1, end, maxdepth - 1, n);
    }
}
//print functions
void IntroSort::printArray(std::string items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}
void IntroSort::printArray(int items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}