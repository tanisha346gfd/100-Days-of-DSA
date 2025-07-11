class Solution {
public:
    void solve(vector<int>& candidates, int target, int idx,
               vector<vector<int>>& v, vector<int>& ans) {
        if (target == 0) {

            v.push_back(ans);
            return;
        }
        if (target < 0) {
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;

            ans.push_back(candidates[i]);

            solve(candidates, target - candidates[i], i + 1, v, ans);

            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> v;

        sort(candidates.begin(), candidates.end());

        solve(candidates, target, 0, v, ans);

        return v;
    }
};