class Solution {
public:
    bool check(vector<bool>& vis, vector<vector<int>>& adj, int source,
               int destination) {

        if (source == destination) {

            return true;
        }

        vis[source] = true;

        for (int neighbour : adj[source]) {

            if (vis[neighbour] == false) {
                if (check(vis, adj, neighbour, destination)) {
                    return true;
                }
            }
        }

        return false; 
    }

    bool validPath(int n, vector<vector<int>>& edges, int source,
                   int destination) {
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {

            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<bool> vis(n, false);

        return check(vis, adj, source, destination);
    }
};