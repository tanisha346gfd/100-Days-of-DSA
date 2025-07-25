class Solution {
  public:
    
    
    void dfs(int node,vector<int>adj[],vector<bool>&visited,stack<int>&st){
        
        visited[node]=true;
        
        for(int neighbour:adj[node]){
            
            if(visited[neighbour]==false){
              
                
                dfs(neighbour,adj,visited,st);
                
            }

        }

            st.push(node);

    }
    
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
     
      
      vector<int>adj[V];
      
      for(auto& edge:edges){
          
          int u=edge[0];
          int v=edge[1];
          
          adj[u].push_back(v);
          
      }
      
      vector<bool>visited(V,false);
      stack<int>st;
      
      for(int i=0;i<V;i++){
          
          if(visited[i]==false) {
              
            dfs(i,adj,visited,st);


          }
              
                }
      
       vector<int>result;
      
       while(!st.empty()){
          
         result.push_back(st.top());
        
         st.pop();
          
      }
      
      return result;

    }
};