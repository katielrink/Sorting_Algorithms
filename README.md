# 22s-pa02-katie
This project presented a means of gaining an in-depth understanding of Sorting algorithms. We were able to determine their methodology and their time complexity. In this project specifically, we wrote and analyzed Insertion Sort, Randomized QuickSort, Merge Sort, Shell Sort, Intro Sort, and Tim Sort.</br>

### Summary of Each Sorting Algorithm
#### Insertion Sort
The goal of an insertion sort is to iterate through an array, keeping all of the elements to the left of the iterator index sorted and the right unsorted. To maintain this, at each element, the program takes it and places it in the correct spot within the sorted array to the left. </br> </br>
To sort an array of size n, an Insertion Sort program would iterate from the second element of an array (arr[1]) to the final element of an array (arr[n]). As the program iterates through, it selected the element the index is currently located at, and it compares each element to it's predecessor in the array. If the current element is smaller than the predecessor, it continues to compare it to the elements before. As the program compares the elements, the larger elements are moved one position up.

#### Randomized QuickSort
The goal of a QuickSort is to utilize a divide-and-conquer algorithm based on a pivot point. Each subarray based around the pivot is recursively sorted.</br></br>
To sort an array of size n, a Randomized Quicksort first selected a random pivot point from within the length n. The sort is repeated to all subarrays of at least two elements. These subarrays are partitioned so all the larger numbers are placed above the pivot, while all the smaller numbers are placed below the pivot. Recursively, the process is repeated on both subarrays until the array is sorted.

#### Merge Sort
The goal of MergeSort is to utilize a divide-and-conquer algorithm based upon spliting the arrays in half. These two halved are the merged back together to create one sorted array. </br></br>
To sort an array of size n, a Merge Sort repeats recursively with each subarray until the subarray is a single element. The middle point is then calculated of the two arrays, then mergesort is called recursively on the first and the second half. Once each subarray reaches a single element, the two arrays are merged together. This is repeated until there is one single sorted array. 

#### Shell Sort
The goal of Shell Sort is to utilize a insertion based algorithm to created a more efficient sorting array than Insertion Sort. In Shell Sort, large shifts are avoided, unlike in insertion sort, thus preventing larger intervals.</br></br>
To sort an array of size n, a Shell Sort firstly sets an interval size, which creates sublists of said interval size. Within each sub-array, the items are taken and swapped using and insertion sort This process is repeated on smaller intervals until the interval is one. Finally, an insertion sort is run on the full array creating a perfectly sorted array.

#### IntroSort
The goal of IntroSort (or Introspective Sort) is to utilize a comparison based algorithm split into three sorting phases. These three seperate sorting phases ensures a more efficient sorting process by utilizing the pros and cons of QuickSort, Heapsort, and Insertion Sort based upon thier most efficient cases. The QuickSort is an efficient sorting algorithm, which has a worst-case performance of O(n^2) comparisons with O(n) auxiliary space due to the pivot chosen and the resulting recursive depth. In contrast, HeapSort has a worst-case time complexity of O(n log(n)). However, every element is swapped making it worst than the best-time of QuickSort. Insertion Sort, while having the worst worst-case time complexity, function extremely efficinetly on short data sets.</br></br>
To sort an array of size n, a IntroSort firstly determines the depthlimit, which is 2 x log(n). The depthlimit represents the maximum depth of recursion up to which quicksort is able to run without moving to its worst case time performance. If the size is greater than the depth limit, HeapSort is run due to it's ability to function at a time complexity of O(n log(n)) regardless of size or depth. However, if the depthlimit is less than the size of the array, the size of the array is then checked. If n <= 16, then insertion sort is run, due to the small size rendering it the most efficient. Otherwise Quicksort is run. Regardless, the worst-case time complexity remains O(n log(n)).

#### TimSort
The goal of TimSort is to utilize both Insertion Sort and MergeSort to create a more efficient sort algorithm. This allows for a stable sorting algorithm, which operates O(n log(n)) time. </br></br>
Firstly, TimSort divides the array into blocks known as a RUN. Each of these seperate blocks or RUNs is then sorted using insertion sort. Finally, each block or RUN is merged together using the merging functionality of a merge sort.


### Summary of Testing Methods
How to generate data sets?
Timing methods
Descriptions of each data set

### Timing Results from Each Sorting Algorithm
Graphs of each algorithm
Determine Upper Bounds of each algorithm - determine if they match published bounds

### Analysis of Timing Results
Randomized vs pre-sorted
Grow larger
Duplicates
Mostly Sorted

### Results
Which algorithm is best
