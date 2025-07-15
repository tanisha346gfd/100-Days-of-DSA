class Solution {
public:

    // Function to check if a string is a palindrome
    bool isPalindrome(const string& path) {
        int left = 0, right = path.size() - 1;
        while (left < right) {
            if (path[left] != path[right])
                return false;
            left++;
            right--;
        }
        return true;
    }

    // Recursive function to find all palindromic partitions
    void solve(vector<vector<string>>& ans, string s, vector<string>& v) {
        if (s.empty()) {
            ans.push_back(v);  // Base case: add current partition to answer
            return;
        }

        for (int i = 0; i < s.size(); i++) {
            string path = s.substr(0, i + 1);
            if (isPalindrome(path)) {
                v.push_back(path);
                solve(ans, s.substr(i + 1), v);
                v.pop_back();  // backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        solve(ans, s, v);
        return ans;
    }
};
