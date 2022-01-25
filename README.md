# CPlusPlusAlgorithms

Sorting algorithms work with values, such as integers and reals, or more complex types, such as student records or dictionary entries. In both cases, the order of the items is based on the value of a sort key.  The key is the value itself when sorting simple types, or it can be a specific component or a combination of components when sorting complex types. There are many examples of sorting in everyday life. Consider listings in a phone book, definitions in a dictionary, or terms in an index, all of which are alphabetized to make it easier to find an entry. The efficiency of some algorithms like search algorithms can be improved when working with sorted arrays.  Another common use of sorting is to present data in an organized manner. For example, we may want to sort a class list by student name, sort a list of cities by zip code or population, sort SAT scores or list entries on a bank statement by date.

## Sorting Algorithms using C++

Sorting is one of the most studied problems in computer science and extensive research has been done in this area, resulting in many different algorithms. There are three types of sorting algorithms:


**1. Bubble Sort**<br />
The **bubble sort** algorithm organizes the values by iterating over the array multiple times, causing larger values to appear at the top or end of the array.<br />

**Introduction to Bubble Sort Algorithm**<br />
**Bubble sorting** is also known as sinking sort. This is a simple sorting algorithm that iterates through the list to sort repeatedly, compares each pair of adjacent items, and swaps them if they are in the wrong order. It compares each successive pair of elements in an unordered array and reverses the elements if they are out of order. The effectiveness of the **bubble sort** algorithm depends only on the number of keys in the array and is independent of specific values and the initial arrangement of those values. To determine the efficiency, we need to determine the total number of iterations performed by the inner loop for a sequence containing n values. The outer loop is executed n – 1 time since the algorithm passes n – 1 over the sequence. The number of iterations for the inner loop is not fixed but depends on the current iteration of the outer loop.<br />

**Bubble sort** does more swaps on each pass, in the hope that it finishes sorting the list sooner than sort by selection. Like sorting by selection, bubble sorting works by comparing two array elements at a time. Unlike sorting by selection, sorting by bubble will always compare two consecutive elements in the array and swap them if they are out of order. If we assume that we start at the beginning of the array, that means that with each pass through the algorithm, the largest element remaining in the array will be placed in its appropriate location in the array.<br />

**2. Count Sort**
The count sort algorithm works by finding the number of each unique element in the array. Then it calculates the position of each element in a sorted array. The only limitation of the counting sort is that it is limited to small positive integers only. **Count sorting** is used to sort a collection of objects based on keys. This algorithm is only used on integers, so we can say that it is an integer sorting algorithm. Because count sorting only uses key values as the index of an array, it cannot be used to compare values inside an array.

**How does Count Sorting Work?**
Let’s take a look at the steps to implement this algorithm:
- First, create an array that is populated by spelling out all of the elements in the original array according to the number of times they appear in an unsorted array.
- Then add the values to the completed count table.
- Then move around the array, incrementing the index of each value by one.
- Finally, you need to iterate through the original array, but be sure to increment the count array while sorting.

**3. Insertion Sort**<br />
The **insertion sort** algorithm maintains a collection of sorted items and a collection of items to sort. In this article, I will walk you through the implementation of insertion sort in C++ programming language.<br />

**How does Insertion Sorting Work?**<br />
When implementing insert sort in a program, the algorithm keeps both sorted and unsorted collections in the same sequence structure.
The algorithm keeps the array of sorted values at the start of the sequence and selects the next unsorted value among the first of those that have not yet been positioned. To position, the next element, the right place in the sequence of sorted values is found by performing a search. After finding the right position, the slot should be opened by moving the elements one position down. To implement insert sorting in C++, we need to take an element from the unsorted array, place it in its corresponding position in the sorted part, and move the elements accordingly.<br />

**4. Merge Sort**
**Merge sort** is a sorting algorithm based on the divide and conquer technique. It works by dividing the arrays into two halves and then combines them in a sorted manner.<br />

The **merge sort** begins by dividing the array to be sorted in half. Then he divides each of these halves in half. The algorithm repeats itself until all of these subarrays contain exactly one element. At this point, each subarray is sorted. In the next phase of the algorithm, the sublists are gradually merged, until we get our sorted original array, of course.<br />

Merge sorting is as fast as quick sorting, both in trade and comparison. The downside of merge sorting is that it requires more copying of data from temporary tables to the full table, which slows down the algorithm a bit.<br />

**5. Quick Sort**
**QuickSort** is a sorting technique which is based on the divide and conquer algorithms. **Quicksort** is an efficient sorting algorithm and belongs to the category of divide and conquer sorting algorithms. It is an unstable sorting algorithm, which means that if two values are the same in an array, the algorithm can still swap them.

**How does Quick Sorting Work?**<br />
The basic idea of quick sorting is to specify an item in the list as the pivot point. Then go through all of the items on the array, swapping out items that are on the wrong side of the pivot. In other words, swap elements that are smaller than the pivot but on the right side of the pivot with elements that are larger than the pivot but on the left side of the pivot. Once you have made all the possible permutations, move the pivot to where it belongs in the array. Now we can ignore the pivot, since it is in position, and repeat the process for the two halves of the list (on either side of the pivot). We repeat this until all the items in the array have been sorted.

**Quick sort** is based on a divide and conquer algorithm. It efficiently sorts an array by dividing the arrays into smaller arrays and sorting the smaller arrays in turn. The best case of quick sorting occurs when the array is already sorted. For this algorithm, the best case looks like the average case in terms of performance. The average case occurs when the pivot splits the board in half or nearly in half on each pass. The worst-case happens when the pivot is always the largest or smallest element on each pass in the array.

**6. Selection Sort**<br />
**Selection sort** is a sorting algorithm, in particular an in-place comparison sort.<br />

**Introduction to Selection Sort**<br />
**Selection sort** has an O(n2) time complexity, which makes it inefficient on large arrays. It is known for its simplicity and has performance advantages over more complicated algorithms in certain situations, especially when auxiliary memory is limited. The algorithm divides the input array into two parts: the sublist of items already sorted, which is built from left to right at the start (left) of the array, and the subarray of items remaining to be sorted which occupy the rest of the array. Initially, the sorted subarray is empty and the unsorted subarray is the entire input array. The algorithm proceeds by finding the smallest (or largest, depending on the sort order) element in the unsorted subarray, swapping it with the unsorted element on the more to the left (putting it in sorted order) and moving the boundaries of the sublist one item to the right. In the **Selection sort** algorithm, the inner loop selects the minimum element in the unsorted array and places the elements in ascending order.<br />


**7. Binary Search**<br />
**Binary Search** is a Divide and Conquer search algorithm. It uses O(log n) time to find the location of an item in a search space where n is the size of the search space. <br />

**Introduction to Binary Search**<br />
**Binary search** works by halving the search space on each iteration after comparing the target value to the median value of the search space. To use a **binary search**, the search space must be ordered (sorted) in some way. Duplicate entries (those that compare as equal according to the compare function) cannot be distinguished, although they do not violate the **binary search** property.<br />

By convention, we use less than operator as a comparison function. If a < b, it will return true. If a is not less than b and b is not less than a, a and b are equal.<br />


**8. Linear Search**<br />
A **linear search** is one of the most basic and useful algorithms, it moves sequentially through a data structure to find the corresponding value this is the reason why it is also known as the sequential search algorithm.<br />

**How Linear Search Algorithm Works?**<br />
The **linear search** algorithm can be compared to looking for a book in a stack of books, you go through them all until you find the one that you want. Let’s understand it with a more simple example explained below. Think of the **linear search** algorithm as a way to find your way through a contact list on your smartphone. A linear search begins at the beginning by reading each name until you find what you are looking for. In n terms of complexity, this is an O(n) search – the time it takes to search the list increases as the contact list increases.<br />

Let’s understand the searching approach of linear search algorithm step by step:<br />

It starts the search from the leftmost element of the array and compares one by one the element we are looking for with each element in the array. If it finds a match between the searched element and the elements in the array, it returns the index of that element. If there is no match between the searched element and the elements of the array, then it returns -1.
