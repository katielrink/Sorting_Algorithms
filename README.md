# 22s-pa02-katie
This project presented a means of gaining an in-depth understanding of Sorting algorithms. We were able to determine their methodology and their time complexity. In this project specifically, we wrote and analyzed Insertion Sort, Randomized QuickSort, Merge Sort, Shell Sort, Intro Sort, and Tim Sort.</br>

### Summary of Each Sorting Algorithm
#### Insertion Sort
The goal of an insertion sort is to iterate through an array, keeping all of the elements to the left of the iterator index sorted and the right unsorted. To maintain this, at each element, the program takes it and places it in the correct spot within the sorted array to the left. </br> </br>
To sort an array of size n, an Insertion Sort program would iterate from the second element of an array (arr[1]) to the final element of an array (arr[n]). As the program iterates through, it selected the element the index is currently located at, and it compares each element to it's predecessor in the array. If the current element is smaller than the predecessor, it continues to compare it to the elements before. As the program compares the elements, the larger elements are moved one position up. </br></br>
The given time complexity on an average or worst case scenerio of Insertion Sort is O(n^2). The time complexity of the best case is O(n). Insertion Sort runs faster than more efficient algorithms provided the there is a very small dataset of n.

#### Randomized QuickSort
The goal of a QuickSort is to utilize a divide-and-conquer algorithm based on a pivot point. Each subarray based around the pivot is recursively sorted.</br></br>
To sort an array of size n, a Randomized Quicksort first selected a random pivot point from within the length n. The sort is repeated to all subarrays of at least two elements. These subarrays are partitioned so all the larger numbers are placed above the pivot, while all the smaller numbers are placed below the pivot. Recursively, the process is repeated on both subarrays until the array is sorted. </br></br>
The given time complexity on an average or best case scenerio of QuickSort is O(nlog(n)). The worst case scenerio holds a time complexity of O(n^2).

#### Merge Sort
The goal of MergeSort is to utilize a divide-and-conquer algorithm based upon spliting the arrays in half. These two halved are the merged back together to create one sorted array. </br></br>
To sort an array of size n, a Merge Sort repeats recursively with each subarray until the subarray is a single element. The middle point is then calculated of the two arrays, then mergesort is called recursively on the first and the second half. Once each subarray reaches a single element, the two arrays are merged together. This is repeated until there is one single sorted array. </br></br>
The given time complexity of Merge Sort at the worst, best, and average case is O(nlog(n)).

#### Shell Sort
The goal of Shell Sort is to utilize a insertion based algorithm to created a more efficient sorting array than Insertion Sort. In Shell Sort, large shifts are avoided, unlike in insertion sort, thus preventing larger intervals.</br></br>
To sort an array of size n, a Shell Sort firstly sets an interval size, which creates sublists of said interval size. Within each sub-array, the items are taken and swapped using and insertion sort This process is repeated on smaller intervals until the interval is one. Finally, an insertion sort is run on the full array creating a perfectly sorted array. </br></br>
The best case time complexity of Shell Sort is O(nlog(n)), and the worst case is O(nlog^2(n)).

#### IntroSort
The goal of IntroSort (or Introspective Sort) is to utilize a comparison based algorithm split into three sorting phases. These three seperate sorting phases ensures a more efficient sorting process by utilizing the pros and cons of QuickSort, Heapsort, and Insertion Sort based upon thier most efficient cases. The QuickSort is an efficient sorting algorithm, which has a worst-case performance of O(n^2) comparisons with O(n) auxiliary space due to the pivot chosen and the resulting recursive depth. In contrast, HeapSort has a worst-case time complexity of O(n log(n)). However, every element is swapped making it worst than the best-time of QuickSort. Insertion Sort, while having the worst worst-case time complexity, function extremely efficinetly on short data sets.</br></br>
To sort an array of size n, a IntroSort firstly determines the depthlimit, which is 2 x log(n). The depthlimit represents the maximum depth of recursion up to which quicksort is able to run without moving to its worst case time performance. If the size is greater than the depth limit, HeapSort is run due to it's ability to function at a time complexity of O(n log(n)) regardless of size or depth. However, if the depthlimit is less than the size of the array, the size of the array is then checked. If n <= 16, then insertion sort is run, due to the small size rendering it the most efficient. Otherwise Quicksort is run. Regardless, the worst-case time complexity remains O(n log(n)). </br></br>

#### TimSort
The goal of TimSort is to utilize both Insertion Sort and MergeSort to create a more efficient sort algorithm. This allows for a sorting algorithm, which operates O(n log(n)) time. </br></br>
Firstly, TimSort divides the array into blocks known as a RUN. Each of these seperate blocks or RUNs is then sorted using insertion sort. Finally, each block or RUN is merged together using the merging functionality of a merge sort.


### Summary of Testing Methods
The dataset was generated via a python program which wrote each data point to a file space seperated. Each data set was created utilizing both strings and integers.</br>
The first data set was developed to create a randomized data set of integers ranging from 0 to 1000 of each size from 10 to 220 incremented by 20s. The second data set was developed to create data sets of the same sizes, however each set was sorted in ascending order. The third data set of the same size was a randomized array with 60% of the array already sorted. The fourth data set of the same size is created with 20% of te set being duplicates. The fifth and final data set of the same size is created with 40% duplicates. </br>
Each sort was timed on each individual data set, and then recorded into a csv file. Prior to each sort, Chrono was utilized to save the start time, and then Chrono was used to save the end time after the sort was complete. By utilizing the chrono::duration functionality the difference in the start and end time was saved in millaseconds before being output into the csv file. </br>

### Timing Results from Each Sorting Algorithm
All of the data from each sort was output into a csv file. There was a larger and a smaller dataset tested, however only the smaller dataset graphs are displayed because they looked cleaner and the other data was unintentionally overwritten. An online graph calculator was utilized to attempt to find a line of best fit based upon the higher times for each data size. I then compared my results to the known worst time complexities of each sort.</br>
#### Insertion Sort
![Insertion Sort Graph](https://github.com/smu-cs-3353/22s-pa02-katie/blob/main/DataAnalysis/InsertionSort.png?raw=true)
As data size increases, the time the sort took to run significantly increased. If we were to draw a line of best fit of the higher times for each data size, we see a line that exponentially increases. In previous tests of bigger data sizes that were unintentionally overwritten, the exponential line was significantly more apparent. This exponential line implies a graph of y = x^2, thus the upper bound would be that of O(n^2). This matches with the known information about the Insertion Sort worse case time complexity. </br>
#### Randomized Quicksort
![Randomized Quicksort Graph](https://github.com/smu-cs-3353/22s-pa02-katie/blob/main/DataAnalysis/QuickSort.png?raw=true)
As data size increases, the quicksort tended to remain more flat with it's run times. Given the higher times of each data size, the data set remains fairly flat aside from a spike near later data. Given previous larger data sets, it is apparent that the data tends to remain fairly flat overall. When graphed into an online graphing calculator, the closest fit line was found to be y = xlog(x). This continues to match with given data about worse case time complexity. </br>
#### Merge Sort
![Merge Sort Graph](https://github.com/smu-cs-3353/22s-pa02-katie/blob/main/DataAnalysis/MergeSort.png?raw=true)
As data size increases, the sort algorithm tended to take progressively longer to run. Noting the higher times at each data set size, the line tends to follow a more linear increase with a light curve at the bottem. When placed into a graph calculator the closest line match appeared to be y = x. However, upon inspection on a larger dataset it was found that the line did match the known data of y = xlog(x), where the worst case time complexity is O(nlog(n)). </br> 
#### Shell Sort
![Shell Sort Graph](https://github.com/smu-cs-3353/22s-pa02-katie/blob/main/DataAnalysis/ShellSort.png?raw=true)
As data size increases, the time the sort took to run seemed to increase rather quickly. Following the higher times line of best fit, we see an immeditate exponential curve to create a concave curve down that then flattens out. This would imply a graph of y = log(x), however upon inspection of a larger data set it is seen that the best case and the worse case differ in that the worst case fits more of an exponential curve, however with a sharper increase than your average exponential. This matches with the known worst case time of O(n* log(2n)), however I was unable to determine an exact matching equation due to the complexity of the equation and sporacity of the data.</br>
#### Intro Sort
![Intro Sort Graph](https://github.com/smu-cs-3353/22s-pa02-katie/blob/main/DataAnalysis/IntroSort.png?raw=true)
As data size increases, the sort seemed to take slowly and progressively longer to run. On this graph, we can seea more exponential curve up, however, it is less sloped than a exponential curve. When run into an online calculator, it can be found to be most closely matching a graph of y = 2xlog(x), which matches with the worst case time complexity of O(nlog(n)). The reason for the potential changes in a curve due the selection of the pivot element for the quicksort method, or a less than efficient implementation of datastructures and coding practice. </br>
#### TimSort
![Tim Sort Graph](https://github.com/smu-cs-3353/22s-pa02-katie/blob/main/DataAnalysis/TimSort.png?raw=true)
As data size increases, the sort takes steadily longer to complete the sort. On this graph, we can see a best fit line that aligns somewhere between an exponential and a linear curve with a few sporadic outliers along the way. In comparison with the other graphs, it appears to align with a y = xlog(x) line, and an online graphing calculator provides evidence of such a match. As the worst case scenerio should be 0(nlog(n)), the conclusion does make sense. In a larger data set, the lower lines do tend to fall lower in a more y = x familiar line. The outliers could best be explained as less than efficient implementation of intervals and RUN sizes.</br>

### Analysis of Timing Results
Given a completely randomized dataset, each sort tends to look as follows : </br>
Intitally, Insertion Sort tends to run fairly efficiently, however in larger datasets, it takes extremely long to run. Introsort and TimSort remain the more efficient algorithms generally, with Quicksort mostly tied with them aside from at initally small datasets. While Quicksort, TimSort, and Introsort tend to be tied at larger datasets, IntroSort runs more efficiently near the beginning. Following behind them tends to be MergeSort, and Shell Sort after that. 
![Randomized](https://github.com/smu-cs-3353/22s-pa02-katie/blob/main/DataAnalysis/RandomIntegerSet-Integer.png?raw=true)
In comparison, a 60% pre-sorted array was run through each sort algorith. Timsort significantly improves over QuickSort and IntroSort due to it's usage of MergeSort. Insertion Sort also increased in performance, but was still mostly outpreformed. The others remained mostly the same in performance. 
![Pre-Sorted](https://github.com/smu-cs-3353/22s-pa02-katie/blob/main/DataAnalysis/SixtyAscending-Integer.png?raw=true)
In a completely sorted array however, real differences were shown. Insertion Sort became incredibly efficient, as well as TimSort. They became the best performing algorithms, while the others remained fairly constant. 
![CompletelySorted](https://github.com/smu-cs-3353/22s-pa02-katie/blob/main/DataAnalysis/AscendingOrder-Integer.png?raw=true)
With duplicates, most of the time complexities for the algorithms tended to remain constant. Quicksort, MergeSort, and IntroSort seemed to see a slight boost. But due to the duplicates just being mostly added data to the sorts, there was not much change. The stable algorithms from the group were proven to see slight improvements over the unstable because they didn't swap the duplicates. This Timsort, Merge Sort, and Insertion sort saw more efficinecy than the others.  
![20% Duplicates](https://github.com/smu-cs-3353/22s-pa02-katie/blob/main/DataAnalysis/TwentyDuplicates-Integer.png?raw=true)
![40% Duplicates](https://github.com/smu-cs-3353/22s-pa02-katie/blob/main/DataAnalysis/FortyDuplicates-Integer.png?raw=true)

### Results
The most efficient algorithm, in my humble opinion, is TimSort. It's time complexity is always more efficient than Insertion Sort and Shell Sort. It is an improved version of Merge Sort, so therefore outpreforms it. It's worst-case time complexity matches the best and average time complexity of QuickSort. It holds an advantage over IntroSort because it preforms incredible efficiently with sorted arrays, and it is stable so it functions more efficintly with duplicates. This leaves it being the best preforming in most scenerios over the other given sort algorithms. 
