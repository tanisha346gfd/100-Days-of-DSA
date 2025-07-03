# 🚀 Day 3: Quick Sort

🔗 **Problem Link:** [Quick Sort – GeeksforGeeks](https://www.geeksforgeeks.org/problems/quick-sort/1)

---

## 📌 Problem Statement

Given an array of integers, implement the **Quick Sort algorithm** using the **last element as the pivot** (Lomuto partition scheme). The function should sort the array in-place in increasing order.

---

## ✅ Constraints

- 1 ≤ N ≤ 10⁵  
- 1 ≤ arr[i] ≤ 10⁶

---

## 🧠 Approach

The Quick Sort algorithm uses a **divide-and-conquer** strategy:
1. Choose a pivot (in this case, the **last element**).
2. Partition the array such that:
   - Elements less than pivot go to the left.
   - Elements greater than or equal go to the right.
3. Recursively apply the above steps to the left and right sub-arrays.

### 🔹 Partition Scheme: Lomuto
- The last element is chosen as pivot.
- Rearrangement is done so that all smaller elements are on the left.

---
