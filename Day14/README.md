# 🧮 Inversion of Array

[🔗 View Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1)

## 📝 Problem Statement

Given an array of integers, your task is to count the number of inversions in the array.

An **inversion** is a pair of indices `(i, j)` such that:

- `i < j` and
- `arr[i] > arr[j]`


### Explanation:
The three inversions are:
- (2, 1)
- (4, 1)
- (4, 3)

## 📌 Constraints

- `1 <= N <= 5 * 10^5`
- `1 <= arr[i] <= 10^7`

## ✅ Expected Time Complexity
- **O(N log N)**

## ✅ Expected Auxiliary Space
- **O(N)**

## 💡 Approach

### ✅ Optimized Using Merge Sort (Divide and Conquer)

We use a modified version of **merge sort** to count the number of inversions efficiently.

Every time an element from the right half is smaller than an element from the left half during merging, all remaining elements in the left half form an inversion with that element.

### Steps:

1. Recursively divide the array into halves.
2. Count inversions in the left half and right half.
3. Count cross inversions during the merge step.

