# Selection-Sort-in-C++
Selection sort is one of the easy sorting algorithms , in this exercise it will be used to sort array of integers.
Selection sort performs the following steps to sort an array from smallest to largest:

  - Starting at array index 0, search the entire array to find the smallest value
  - Swap the smallest value found in the array with the value at index 0
  - Repeat steps 1 & 2 starting from the next index

In other words, we’re going to find the smallest element in the array, and swap it into the first position. Then we’re going to find the next smallest element, and swap it into the second position. This process will be repeated until we run out of elements.

Here is an example of this algorithm working on 5 elements. Let’s start with a sample array:

{ 30, 50, 20, 10, 40 }

First, we find the smallest element, starting from index 0:

{ 30, 50, 20, 10, 40 }

We then swap this with the element at index 0:

{ 10, 50, 20, 30, 40 }

It will continue until it sorts all the elements, **important tip to be noted here: we need not to compare last element since that might compare by own. So the loop should start from index 0 till array.length -1 only.**
