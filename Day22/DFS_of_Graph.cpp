class Solution {
  public:
   
   
   
void helper(vector<vector<int>>&adj,vector<int>&ans,vector<bool>&res,int idx)
{
   
       
       
       
   res[idx]=true;
   ans.push_back(idx);
   
   
   
   for(int neighbour:adj[idx]){
if(res[neighbour]==false){
   
   helper(adj,ans,res,neighbour);
   
}
   
   }
   
   
   
   }
   
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
     
     int v=adj.size();
     
     vector<bool>res(v,false);
     vector<int>ans;
     
     helper(adj,ans,res,0);
     
     
     return ans;
     
     
     
     
     
     
     
     
     
        
    }
};