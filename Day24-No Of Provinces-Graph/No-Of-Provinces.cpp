class Solution {
public:
   void dfs(vector<vector<int>>& isConnected, int u,vector<bool>& visited,int n) {

        visited[u] = true;

        for (int v = 0; v < n; v++) {

            if (visited[v] == false && isConnected[u][v] == 1) {

                dfs(isConnected, v, visited,n);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();

        vector<bool> visited(n, false);
        int count = 0;
        for (int i = 0; i < n; i++) {

            if (visited[i] == false) {
                count++;
                dfs(isConnected, i, visited,n);
            }
        }

        return count;
    }
};