//
// Created by katie on 3/1/2022.
//

#include "ShellSort.h"

#include <iostream>

//constructors
ShellSort::ShellSort(std::string items[], int n){
    std::cout << "Running Shell Sort...." << std::endl;
    printArray(items, n);
    run(items, n);
    printArray(items, n);
}
ShellSort::ShellSort(int items[], int n){
    std::cout << "Running Shell Sort...." << std::endl;
    printArray(items, n);
    run(items, n);
    printArray(items, n);
}

//run statements
void ShellSort::run(std::string items[], int n){
    //start with big gap and progressively reduce
    for(int gap = n/2; gap>0; gap /=2){
        //gapped insertion sort for this gap size
        for(int i=gap;i<n;i++){
            //add arr[i] to gap sorted elements
            std::string temp = items[i];

            //shift already gap sorted to correct location
            int j=i;
            for(;j>=gap && items[j-gap]>temp; j-=gap){
                items[j] = items[j-gap];
            }
            items[j] = temp;
        }
    }
}
void ShellSort::run(int items[], int n){
    //start with big gap and progressively reduce
    for(int gap = n/2; gap>0; gap /=2){
        //gapped insertion sort for this gap size
        for(int i=gap;i<n;i++){
            //add arr[i] to gap sorted elements
            int temp = items[i];

            //shift already gap sorted to correct location
            int j=i;
            for(;j>=gap && items[j-gap]>temp; j-=gap){
                items[j] = items[j-gap];
            }
            items[j] = temp;
        }
    }
}

//print functions
void ShellSort::printArray(std::string items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}
void ShellSort::printArray(int items[], int n){
    std::cout << "Arr: ";
    for(int i=0;i<n;i++){
        std::cout << items[i] << " ";
    }
    std::cout << "\n";
}