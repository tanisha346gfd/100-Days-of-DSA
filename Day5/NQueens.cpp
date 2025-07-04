class Solution {
public:
    bool issafe(vector<vector<char>>& board, int row, int col) {

        for (int i = row - 1; i >= 0; i--) {
            if (board[i][col] == 'Q') {

                return false;
            }
        }

        for (int i = col - 1; i >= 0; i--) {

            if (board[row][i] == 'Q') {
                return false;
            }
        }

        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {

                return false;
            }
        }

        for (int i = row - 1, j = col + 1; i >= 0 && j < board.size();
             i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }
    void result(vector<vector<char>>& board, int row,
                vector<vector<string>>& v) {

        if (row == board.size()) {

            vector<string> temp;
            for (int i = 0; i < board.size(); i++) {
                string s = "";
                for (int j = 0; j < board.size(); j++) {
                    s += board[i][j];
                }
                temp.push_back(s);
            }
            v.push_back(temp);
            return;
        }

        for (int j = 0; j < board.size(); j++) {
            if (issafe(board, row, j)) {
                board[row][j] = 'Q';

                result(board, row + 1, v);

                board[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {

        vector<vector<char>> board;
        vector<vector<string>> v;
        for (int i = 0; i < n; i++) {
            vector<char> newRow;
            for (int j = 0; j < n; j++) {

                newRow.push_back('.');
            }
            board.push_back(newRow);
        }

        result(board, 0, v);
        return v;
    }
};