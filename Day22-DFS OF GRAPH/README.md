# 🧭 Depth First Traversal for a Graph

**Platform:** GeeksforGeeks  
**Link:** [Depth First Traversal – GFG](https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1)

---

## 🔍 Problem Description:

Given a **connected undirected graph**, perform **Depth First Traversal (DFS)** starting from vertex 0.

Return a list of vertices in the order they are visited using DFS.

---


---

## 💡 Approach:

- Initialize a **visited[] array** to keep track of visited nodes.
- Perform **recursive DFS** starting from node 0:
  - Visit current node, mark as visited.
  - Recursively visit all its unvisited adjacent nodes.
- Store the order in which nodes are visited.

---

## ⏱ Time and Space Complexity:

- **Time:** O(V + E)  
  - V = number of vertices, E = number of edges
- **Space:** O(V)  
  - for visited array + recursion stack

---

## ✅ Tags:

`#Graph` `#DFS` `#Recursion` `#Traversal` `#GFGEasy`

