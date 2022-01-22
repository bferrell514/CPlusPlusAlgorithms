# CPlusPlusAlgorithms

Sorting algorithms work with values, such as integers and reals, or more complex types, such as student records or dictionary entries. In both cases, the order of the items is based on the value of a sort key.  The key is the value itself when sorting simple types, or it can be a specific component or a combination of components when sorting complex types. There are many examples of sorting in everyday life.  Consider listings in a phone book, definitions in a dictionary, or terms in an index, all of which are alphabetized to make it easier to find an entry. The efficiency of some algorithms like search algorithms can be improved when working with sorted arrays.  Another common use of sorting is to present data in an organized manner. For example, we may want to sort a class list by student name, sort a list of cities by zip code or population, sort SAT scores or list entries on a bank statement by date.

## Sorting Algorithms using C++

Sorting is one of the most studied problems in computer science and extensive research has been done in this area, resulting in many different algorithms. There are three types of sorting algorithms:


**1. Bubble Sort**<br />
The bubble sort algorithm organizes the values by iterating over the array multiple times, causing larger values ​​to appear at the top or end of the array. In this article, I will explain the implementation of Bubble Sort in C++ programming language.

**Introduction to Bubble Sort Algorithm**<br />
Bubble sorting is also known as sinking sort. This is a simple sorting algorithm that iterates through the list to sort repeatedly, compares each pair of adjacent items, and swaps them if they are in the wrong order.
It compares each successive pair of elements in an unordered array and reverses the elements if they are out of order. The effectiveness of the bubble sort algorithm depends only on the number of keys in the array and is independent of specific values and the initial arrangement of those values. To determine the efficiency, we need to determine the total number of iterations performed by the inner loop for a sequence containing n values. The outer loop is executed n – 1 time since the algorithm passes n – 1 over the sequence. The number of iterations for the inner loop is not fixed but depends on the current iteration of the outer loop.<br />

Bubble sort does more swaps on each pass, in the hope that it finishes sorting the list sooner than sort by selection. Like sorting by selection, bubble sorting works by comparing two array elements at a time. Unlike sorting by selection, sorting by bubble will always compare two consecutive elements in the array and swap them if they are out of order. If we assume that we start at the beginning of the array, that means that with each pass through the algorithm, the largest element remaining in the array will be placed in its appropriate location in the array.<br />


**2. Insertion Sort**<br />
The insertion sort algorithm maintains a collection of sorted items and a collection of items to sort. In this article, I will walk you through the implementation of insertion sort in C++ programming language.<br />

**How does Insertion Sorting Work?**<br />
When implementing insert sort in a program, the algorithm keeps both sorted and unsorted collections in the same sequence structure.
The algorithm keeps the array of sorted values at the start of the sequence and selects the next unsorted value among the first of those that have not yet been positioned. To position, the next element, the right place in the sequence of sorted values is found by performing a search. After finding the right position, the slot should be opened by moving the elements one position down. To implement insert sorting in C++, we need to take an element from the unsorted array, place it in its corresponding position in the sorted part, and move the elements accordingly.<br />


**3. Selection Sort**<br />
Selection sort is a sorting algorithm, in particular an in-place comparison sort. In this article, I will introduce you to selection sorting in C ++ programming language.<br />

**Introduction to Selection Sort**
Selection sort has an O(n2) time complexity, which makes it inefficient on large arrays. It is known for its simplicity and has performance advantages over more complicated algorithms in certain situations, especially when auxiliary memory is limited.
The algorithm divides the input array into two parts: the sublist of items already sorted, which is built from left to right at the start (left) of the array, and the subarray of items remaining to be sorted which occupy the rest of the array.
Initially, the sorted subarray is empty and the unsorted subarray is the entire input array. The algorithm proceeds by finding the smallest (or largest, depending on the sort order) element in the unsorted subarray, swapping it with the unsorted element on the more to the left (putting it in sorted order) and moving the boundaries of the sublist one item to the right. In the Selection sort algorithm, the inner loop selects the minimum element in the unsorted array and places the elements in ascending order. Let’s see how to implement it in C ++ programming language<br />
