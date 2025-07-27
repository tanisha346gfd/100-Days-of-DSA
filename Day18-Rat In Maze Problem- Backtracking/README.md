# 🐀 Rat in a Maze Problem

**Platform:** GeeksforGeeks  
**Link:** [Rat in a Maze – GFG](https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1?page=1&category=CPP,Recursion,Backtracking&sortBy=submissions)

---

## 🔍 Problem Description:

You are given an `n x n` binary matrix (maze) where:
- `1` represents a path the rat can take,
- `0` represents a blocked cell.

The rat starts from `(0,0)` and wants to reach `(n-1, n-1)`.

The rat can move **in four directions**:
- `D` = Down
- `L` = Left
- `R` = Right
- `U` = Up

Return **all possible paths** in **lexicographic order**.

---


---

## 💡 Approach:

- Use **DFS + Backtracking** to explore all paths from `(0, 0)` to `(n-1, n-1)`.
- Maintain a **visited matrix** to avoid cycles.
- Explore in the order **Down → Left → Right → Up** to ensure **lexicographic sorting**.
- Store each successful path (string of directions).

---

## ⏱ Time and Space Complexity:

- **Time:** O(4^(n²)) in the worst case — due to exploring all paths.
- **Space:** O(n²) — due to recursion stack and visited matrix.

---

## ✅ Tags:

`#Backtracking` `#Recursion` `#Matrix` `#Maze` `#GFG` `#Amazon` `#Microsoft`

