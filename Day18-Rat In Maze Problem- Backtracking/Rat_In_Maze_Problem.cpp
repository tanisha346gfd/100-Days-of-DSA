class Solution {
public:
    void solve(vector<vector<int>>& maze, int row, int col, string &path, 
               vector<string>& ans, vector<vector<int>>& visited) {
        int n = maze.size();

        // Check bounds, blocked cells or already visited
        if (row < 0 || col < 0 || row >= n || col >= n || maze[row][col] == 0 || visited[row][col])
            return;

        // If destination reached
        if (row == n  - 1 && col == n - 1) {
            ans.push_back(path);
            return;
        }

        visited[row][col] = 1;

        // Explore directions in lex order: D, L, R, U
        path.push_back('D');
        solve(maze, row + 1, col, path, ans, visited);
        path.pop_back();

        path.push_back('L');
        solve(maze, row, col - 1, path, ans, visited);
        path.pop_back();

        path.push_back('R');
        solve(maze, row, col + 1, path, ans, visited);
        path.pop_back();

        path.push_back('U');
        solve(maze, row - 1, col, path, ans, visited);
        path.pop_back();

        visited[row][col] = 0; // backtrack
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        vector<string> ans;
        vector<vector<int>> visited(n, vector<int>(n, 0));
        string path = "";

        if (maze[0][0] == 0) return ans;  // start blocked

        solve(maze, 0, 0, path, ans, visited);

        sort(ans.begin(), ans.end());  // ensure lex order

        return ans;
    }
};
