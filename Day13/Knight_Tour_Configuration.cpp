class Solution {
public:
    bool solve(vector<vector<int>>& grid, int row, int col, int s, int expaval) {
        if (row >= s || col >= s || row < 0 || col < 0 ||
            grid[row][col] != expaval) {
            return false;
        }

        if (expaval == (s * s - 1)) {
            return true; // All cells visited correctly
        }

        // All 8 knight moves
        int val1 = solve(grid, row - 2, col - 1, s, expaval + 1);
        int val2 = solve(grid, row - 2, col + 1, s, expaval + 1);
        int val3 = solve(grid, row - 1, col - 2, s, expaval + 1);
        int val4 = solve(grid, row - 1, col + 2, s, expaval + 1);
        int val5 = solve(grid, row + 1, col - 2, s, expaval + 1);
        int val6 = solve(grid, row + 1, col + 2, s, expaval + 1);
        int val7 = solve(grid, row + 2, col - 1, s, expaval + 1);
        int val8 = solve(grid, row + 2, col + 1, s, expaval + 1);

        return val1 || val2 || val3 || val4 || val5 || val6 || val7 || val8;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        int s = grid.size();
        return solve(grid, 0, 0, s, 0);
    }
};
