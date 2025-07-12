 🎯 LeetCode - \[60. Permutation Sequence](https://leetcode.com/problems/permutation-sequence/) `HARD`



Given `n` and `k`, return the kᵗʰ permutation sequence of numbers from `1` to `n` in lexicographical order.



---



 🧠 Approach: Backtracking (Brute Force)



This solution uses a recursive backtracking method to generate all permutations in lexicographic order. It stops once the kᵗʰ valid permutation is formed.



 🔑 Key Ideas:



\- \*\*Backtracking\*\*: Explore each possibility by picking unused numbers.

\- \*\*Early Termination\*\*: Stop once the kᵗʰ permutation is found.

\- \*\*Tracking Usage\*\*: Use a `use\[]` array to track already chosen numbers.



---

