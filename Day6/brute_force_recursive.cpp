class Solution {
public:
    void result(int i, int j, int m, int n, int& k) {
        if (i >= m || j >= n) return;

        if (i == m - 1 && j == n - 1) {
            k++;
            return;
        }

        result(i, j + 1, m, n, k); 
        result(i + 1, j, m, n, k); 
    }

    int uniquePaths(int m, int n) {
        int k = 0;
        result(0, 0, m, n, k);
        return k;
    }
};
