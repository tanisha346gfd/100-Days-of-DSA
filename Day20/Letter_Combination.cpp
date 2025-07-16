class Solution {
public:
    void solve(vector<string>& mapping, vector<string>& v, string digits, string& output, int idx) {
        if (idx == digits.length()) {
            v.push_back(output);

            return;
        }

        int x = digits[idx] - '0';
        string res = mapping[x];

        for (int i = 0; i < res.length(); i++) {
            output.push_back(res[i]);
            solve(mapping, v, digits, output, idx + 1);
            output.pop_back(); // backtrack
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> v;
        vector<string> mapping = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        string output = "";

        solve(mapping, v, digits, output, 0);
        return v;
    }
};
