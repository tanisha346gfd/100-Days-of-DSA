# 🟢 Day 1: Generate All Binary Strings Without Consecutive 1's

🔗 [GFG Problem Link](https://www.geeksforgeeks.org/problems/generate-all-binary-strings/1)

## 🧠 Problem Statement
Given a number **n**, generate all binary strings of length **n** such that there are no two 1’s together.

---

## 💡 Approach

- Use **recursion** to generate all binary strings.
- Always allow appending `'0'`.
- Append `'1'` only when the last character was `'0'` (or it’s the start).
- Store the results in a vector of strings.

---
