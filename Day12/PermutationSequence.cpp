class Solution {
public:
    string s = "";
    int ct=0;
    void solve(vector<int>& v, int n, int k, int idx, vector<int>& use) {

          if (idx > n) {
            ct++;
            if (ct == k) {
                for (int num : v) {
                    s += to_string(num);
                }
            }
            return;
        }

        for (int i = 1; i <= n; i++) {            
            if(use[i-1]==0){
            v.push_back(i);
             use[i-1]=1;

            solve(v, n, k, idx + 1, use);
            use[i-1]=0;
            v.pop_back();
            }
        
        }
    }
    string getPermutation(int n, int k) {
        vector<int> use(n,0);
        vector<int> v;
        solve(v, n, k, 1, use);
        return s;
    }
};