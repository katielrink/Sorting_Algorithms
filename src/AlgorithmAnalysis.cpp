//
// Open Input file with a new dataset on each line
// Sort all values in each data file and time
// Times are written to SortTimes.csv
//

#include "AlgorithmAnalysis.h"
#include "InsertionSort.h"
#include "IntroSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "ShellSort.h"
#include "TimeSort.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <sstream>

AlgorithmAnalysis::AlgorithmAnalysis(std::string textFile){
    //open and read input from the file provided
    std::ifstream input;
    std::string s = "../input/";
    s.append(textFile);
    input.open(s);
    if(!input){
        std::cout << "Error: file could not be opened" << std::endl;
        return;
    }

    //open output
    std::ofstream output;
    output.open("../SortTimes.csv");
    if(!output){
        std::cout << "Error: file could not be opened" << std::endl;
        return;
    }
    output << "Data Size,Insertion Sort,Intro Sort,Merge Sort,Quick Sort,Shell Sort,Time Sort" << std::endl;

    //loop through all datasets in the file
    bool integers = false;
    std::string line;
    std::getline(input, line);
    //run for integer sorts
    do {
        if(isdigit(line.at(0)))
            integers = true;
        else
            integers = false;
        if(integers){
            std::vector<int> items;
            //add each item to a vector
            std::stringstream ss(line);
            while(!ss.eof()){
                int item;
                ss >> item;
                items.push_back(item);
            }
            output << items.size() << ",";
            //convert to an array
            int arr[items.size()];
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }
            //run each sort on the vector and time
            //Time for Insertion Sort
            auto start = std::chrono::steady_clock::now();
            new InsertionSort(arr, items.size());
            auto end = std::chrono::steady_clock::now();
            auto diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << ",";

            //reset
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }

            //Time for Intro Sort
            start = std::chrono::steady_clock::now();
            new IntroSort(arr, items.size());
            end = std::chrono::steady_clock::now();
            diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << ",";

            //reset
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }

            //Time for Merge Sort
            start = std::chrono::steady_clock::now();
            new MergeSort(arr, items.size());
            end = std::chrono::steady_clock::now();
            diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << ",";

            //reset
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }

            //Time for Quick Sort
            start = std::chrono::steady_clock::now();
            new QuickSort(arr, items.size());
            end = std::chrono::steady_clock::now();
            diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << ",";

            //reset
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }

            //Time for Shell Sort
            start = std::chrono::steady_clock::now();
            new ShellSort(arr, items.size());
            end = std::chrono::steady_clock::now();
            diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << ",";

            //reset
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }

            //Time for Time Sort
            start = std::chrono::steady_clock::now();
            new TimeSort(arr, items.size());
            end = std::chrono::steady_clock::now();
            diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << "\n";
        }
        //run for string cases
        else {
            std::vector<std::string> items;
            //add each item to a vector
            std::stringstream ss(line);
            while(!ss.eof()){
                std::string item;
                ss >> item;
                items.push_back(item);
            }
            output << items.size() << ",";
            //convert to an array
            std::string arr[items.size()];
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }
            //run each sort on the vector and time
            //Time for Insertion Sort
            auto start = std::chrono::steady_clock::now();
            new InsertionSort(arr, items.size());
            auto end = std::chrono::steady_clock::now();
            auto diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << ",";

            //reset
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }

            //Time for Intro Sort
            start = std::chrono::steady_clock::now();
            new IntroSort(arr, items.size());
            end = std::chrono::steady_clock::now();
            diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << ",";

            //reset
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }

            //Time for Merge Sort
            start = std::chrono::steady_clock::now();
            new MergeSort(arr, items.size());
            end = std::chrono::steady_clock::now();
            diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << ",";

            //reset
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }

            //Time for Quick Sort
            start = std::chrono::steady_clock::now();
            new QuickSort(arr, items.size());
            end = std::chrono::steady_clock::now();
            diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << ",";

            //reset
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }

            //Time for Shell Sort
            start = std::chrono::steady_clock::now();
            new ShellSort(arr, items.size());
            end = std::chrono::steady_clock::now();
            diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << ",";

            //reset
            for(int i=0;i<items.size();i++){
                arr[i] = items.at(i);
            }

            //Time for Time Sort
            start = std::chrono::steady_clock::now();
            new TimeSort(arr, items.size());
            end = std::chrono::steady_clock::now();
            diff = end-start;
            output << std::chrono::duration <double, std::milli> (diff).count() << "\n";
        }
    } while(std::getline(input, line));

    //close out all files
    input.close();
    output.close();
    };
