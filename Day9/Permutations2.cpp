class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& v, int idx) {
        vector<int> use(21, 0);
        if (idx == nums.size()) {
            v.push_back(nums);
            return;
        }

        for (int i = idx; i < nums.size(); i++) {
            if (use[nums[i] + 10] == 0) {

                swap(nums[i], nums[idx]);

                solve(nums, v, idx + 1);
                swap(nums[i], nums[idx]);
                use[nums[i] + 10] = 1;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        vector<vector<int>> v;
        solve(nums, v, 0);

        return v;
    }
};