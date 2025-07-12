\# ♟️ Check Knight Tour Configuration – LeetCode 2596



This repository contains a recursive and backtracking solution in C++ for validating a knight’s tour on an `n x n` chessboard grid, as per the LeetCode problem:  

🔗 \[Check Knight Tour Configuration](https://leetcode.com/problems/check-knight-tour-configuration/description/)



---



\## 🧩 Problem Statement



A knight's tour is a sequence of moves of a knight on a chessboard such that the knight visits every square exactly once.



You are given an `n x n` integer matrix `grid` where `grid\[row]\[col]` represents the move number at cell `(row, col)` starting from `0` to `n\*n - 1`.  

Your task is to return `true` if the grid represents a valid knight’s tour; otherwise, return `false`.



---



\## 🧠 Approach



This solution uses \*\*pure recursion and backtracking\*\*:



1\. Start from cell containing `0`.

2\. Recursively try all 8 knight moves to reach the next expected value (`1, 2, ..., n² - 1`).

3\. If the full path is followed legally, return `true`.

4\. If any step is invalid or goes out of bounds or skips expected number, backtrack.

