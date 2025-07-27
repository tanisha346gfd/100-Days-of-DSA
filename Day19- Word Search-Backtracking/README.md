# 🔤 Word Search in a Grid

**Platform:** GeeksforGeeks  
**Link:** [Word Search – GFG](https://www.geeksforgeeks.org/batch/gfg-160-problems/track/recursion-and-backtracking-gfg-160/problem/word-search)

---

## 🔍 Problem Description:

Given a 2D grid of characters and a list of words, find all words present in the grid.  
Words can be formed by connecting **adjacent characters** in **8 directions** (horizontally, vertically, and diagonally).  
The **same cell** in a word path **cannot be used more than once**.

---

---

## 💡 Approach:

- Use **backtracking** and a **recursive DFS** for each word.
- Try starting from each cell and attempt to build the word.
- Mark cells as **visited** during exploration and **unmark** after backtracking.
- Explore all **8 directions** (up, down, left, right, and 4 diagonals).
- Store words that are found.

---

## ⏱ Time and Space Complexity:

- **Time:** O(N*M*8^L) where:
  - `N x M` is the grid size,
  - `L` is the maximum word length,
  - Each letter can go in 8 directions.
- **Space:** O(L) recursion stack for each DFS call.

---

## ✅ Tags:

`#Recursion` `#Backtracking` `#Matrix` `#StringSearch` `#GFG160`
