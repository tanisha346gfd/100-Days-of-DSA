class Solution {
  public:
   
   void solve(string &s,vector<string>&ans,int idx){
   
   
   if(idx==s.length()){
     
     ans.push_back(s);
       
       
   }
   
   unordered_set<char>used;
   for(int i=idx;i<s.length();i++){
    if (used.find(s[i]) != used.end()) continue;  // Skip duplicates
        
    used.insert(s[i]);
   swap(s[i],s[idx]);
   solve(s,ans,idx+1);
   swap(s[i],s[idx]);
   
   
   
   
   }
   
   }
    vector<string> findPermutation(string &s) {
        // Code here there
   
   vector<string>v;
   sort(s.begin(),s.end());
   vector<string>ans;
   
   solve(s,ans,0);
   
   return ans;
   
   
   
   
   
   
   
   
    }
};
