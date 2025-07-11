\# 🚀 Day 11 – Combination Sum III (Backtracking)



\## 📌 Problem Statement

Leetcode \[216. Combination Sum III](https://leetcode.com/problems/combination-sum-iii/)



> Find all possible combinations of `k` numbers that add up to a number `n`, using numbers from `1` to `9` without repetition. Each combination should contain exactly `k` numbers.



---



\## 🧠 Approach: Backtracking



\- Start from number `1` to `9` (no repetition allowed).

\- Use recursion to try all combinations.

\- Keep track of:

&nbsp; - `k` → total numbers needed

&nbsp; - `n` → remaining sum

&nbsp; - `idx` → current number to start from (avoid repeats)

\- Base case: when size of current vector is `k` and sum is `0`, store the result.



---



