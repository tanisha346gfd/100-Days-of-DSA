## 🔗 Problem Link:

[LeetCode 46. Permutations](https://leetcode.com/problems/permutations/)

## 🧩 Problem Statement

Given an array of **distinct integers**, return *all possible permutations*. You can return the answer in **any order**.

### 📥 Input:
- A vector `nums` of size `n` with **distinct integers**.

### 📤 Output:
- A 2D vector containing all possible permutations of `nums`.

---

## 💡 Approach

We use **backtracking** to generate all permutations by exploring each possible arrangement:

1. Fix one element at a time by swapping.
2. Recurse to generate permutations for the remaining subarray.
3. Backtrack to undo the swap and try the next possibility.

This generates a **recursion tree** where each level represents the placement of one element.

