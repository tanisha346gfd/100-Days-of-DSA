# 📘 Permutations of a Given String

**Platform:** GeeksforGeeks  
**Link:** [Permutations of a Given String – GFG](https://www.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1?page=1&category=CPP,Recursion,Backtracking&company=Amazon,Microsoft,Flipkart&sortBy=submissions)

---

## 🔍 Problem Description:

Given a string `S`, print all permutations of the string in **lexicographically sorted order**.

---

## 🔁 Example:


---

## 💡 Approach:

- Use **backtracking** to generate all permutations by swapping characters at each position.
- Use a **set or sort** the result to avoid duplicates and ensure **lexicographic order**.
- Base condition: when current index reaches end of string, store the permutation.

---

## ⏱ Time and Space Complexity:

- **Time:** O(n × n!) — because we generate all n! permutations and copying the string takes O(n)
- **Space:** O(n) — recursion stack (ignoring result storage)

---

## ✅ Tags:

`#Recursion` `#Backtracking` `#Strings` `#Amazon` `#Microsoft` `#Flipkart`

