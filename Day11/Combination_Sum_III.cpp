class Solution {
public:
    void solve(vector<int>& v, int k, int n, vector<vector<int>>& ans,
               int idx) {
        if (n == 0 && v.size() == k) {

            ans.push_back(v);
            return;
        }
        if (v.size() == k) {

            return;
        }

        if (n < 0) {

            return;
        }

        for (int i = idx; i < 9; i++) {

            v.push_back(i + 1);
            solve(v, k, n - (i + 1), ans, i + 1);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v;

        vector<vector<int>> ans;
        solve(v, k, n, ans, 0);
        return ans;
    }
};