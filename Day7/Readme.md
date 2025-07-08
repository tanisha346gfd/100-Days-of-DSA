Sudoku Solver – Leetcode #37

Level: Hard

Tags: Backtracking, Recursion, Constraint Satisfaction



📘 Problem Statement:

Write a program to solve a Sudoku puzzle by filling empty cells. The solution must follow these rules:



Each digit from 1 to 9 must occur once in each row, column, and 3x3 sub-box.



Empty cells are represented by the character '.'.



💡 Approach:

✔️ Use recursive backtracking to try placing digits from '1' to '9' in each empty cell.



✔️ For each placement, ensure:



It's not repeated in the current row



It's not repeated in the current column



It's not repeated in the current 3x3 box



✔️ If valid, recurse to solve the next cell. If stuck, backtrack.





