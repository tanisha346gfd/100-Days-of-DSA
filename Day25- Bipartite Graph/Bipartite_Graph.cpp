class Solution {
public:
    bool bipartite(vector<vector<int>>& graph, int curr, vector<int>& color,
                   int currcolor) {

        color[curr] = currcolor;
        queue<int> q;

        q.push(curr);

        while (q.size() != 0) {
            int u = q.front();
            q.pop();

            for (auto& v : graph[u]) {

                if (color[v] == color[u]) {

                    return false;
                }

                else if (color[v] == -1) {
                    color[v] = 1 - color[u];
                    q.push(v);
                }
            }
        }

        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {

        int V = graph.size();
        vector<int> color(V, -1);

        for (int i = 0; i < V; i++) {
            if (color[i] == -1) {

                if (bipartite(graph, i, color, 1) == false) {

                    return false;
                }
            }
        }

        return true;
    }
};