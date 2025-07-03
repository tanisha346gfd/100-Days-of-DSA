// User function Template for C++

class Solution {
  public:
   
   
  void result(vector<int>&arr,int idx,vector<int>ans,vector<vector<int>>&v ){
   
   if(idx==arr.size()){
       
       v.push_back(ans);
       return;
      }
    
   result(arr,idx+1,ans,v);
   
   ans.push_back(arr[idx]);
   
   result(arr,idx+1,ans,v);
 
   }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code
        vector<int>ans;
        
        vector<vector<int>>v;
        
        result(arr,0,ans,v);
        
        sort(v.begin(),v.end());
        
        
        return v;
  
    }
};