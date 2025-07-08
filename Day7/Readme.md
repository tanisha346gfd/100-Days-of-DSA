# 🧩 LeetCode 37 – Sudoku Solver

🔗 [Problem Link](https://leetcode.com/problems/sudoku-solver/)  
**Difficulty:** Hard  
**Topics:** `Backtracking`, `Recursion`, `Constraint Satisfaction`

---

## 📘 Problem

Write a program to solve a 9x9 Sudoku board by filling empty cells (`'.'`) such that:

- Each digit 1–9 appears exactly once in every **row**, **column**, and **3x3 box**.

The board is modified **in-place**.

---

## 💡 Approach

- Use **recursive backtracking**.
- At each empty cell, try digits `'1'` to `'9'`.
- For each digit:
  - Check if it’s safe (not present in current row, column, or 3x3 box).
  - If safe, place it and recurse.
  - If stuck, **backtrack**.

---


