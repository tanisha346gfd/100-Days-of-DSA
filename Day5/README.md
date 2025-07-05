# Day 5 - N Queens Problem

## Problem Description
The N Queens puzzle is the problem of placing N chess queens on an N×N chessboard so that no two queens threaten each other. Thus, a solution requires that no two queens share the same row, column, or diagonal.

This is the original problem on LeetCode:  
[N Queens - LeetCode](https://leetcode.com/problems/n-queens/)

 Links of similar types of Problems Solved :

 [N Queen Problem – GeeksforGeeks](https://www.geeksforgeeks.org/problems/n-queen-problem0315/1)
 
 [N Queens II – LeetCode](https://leetcode.com/problems/n-queens-ii/description/)


## Approach
We use **backtracking** to try placing a queen row by row. For each cell in a row, we check if it is safe to place a queen:
- No other queen in the same column.
- No other queen in the upper-left diagonal.
- No other queen in the upper-right diagonal.

If safe, place the queen and move to the next row. If no valid placement exists, backtrack and try another position.

