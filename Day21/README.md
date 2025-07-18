# 🔗 Find if Path Exists in Graph

**Platform:** LeetCode  
**Link:** [Find if Path Exists in Graph – LeetCode](https://leetcode.com/problems/find-if-path-exists-in-graph/)

---

## 🔍 Problem Description:

You are given an **undirected graph** with `n` nodes labeled from `0` to `n - 1`, and a list of edges where each edge is a pair of nodes `[u, v]`.

Given two integers `source` and `destination`, return `true` if there is a path from source to destination, otherwise return `false`.

---


---

## 💡 Approach:

- Build an **adjacency list** from the input edge list.
- Use **DFS** (or BFS) to check if destination is reachable from the source.
- Keep a **visited array** to prevent infinite cycles or repeated work.
- Return `true` when destination is reached; otherwise `false`.

---

## ⏱ Time and Space Complexity:

- **Time:** O(V + E)  
  - V = number of nodes  
  - E = number of edges  
- **Space:** O(V + E)  
  - for adjacency list and visited set

---

## ✅ Tags:

`#Graph` `#DFS` `#BFS` `#LeetCodeEasy` `#AdjacencyList`
