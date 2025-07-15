class Solution {
public:
    bool isSafe(int node, vector<int> &color, vector<vector<int>> &graph, int col) {
        for (int neighbor : graph[node]) {
            if (color[neighbor] == col) return false;
        }
        return true;
    }

    bool solve(int node, int V, int m, vector<int> &color, vector<vector<int>> &graph) {
        if (node == V) return true;  // All nodes colored

        for (int col = 1; col <= m; col++) {
            if (isSafe(node, color, graph, col)) {
                color[node] = col;
                if (solve(node + 1, V, m, color, graph)) return true;
                color[node] = 0; // Backtrack
            }
        }

        return false;
    }

bool graphColoring(int V, vector<vector<int>> &edges, int m){
        vector<vector<int>> graph(V);
        for (auto &e : edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]); // Undirected
        }

        vector<int> color(V, 0);
        return solve(0, V, m, color, graph);
    }
};
