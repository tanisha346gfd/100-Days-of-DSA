class Solution {
  public:
   
   
  bool solve(vector<vector<char>>& mat,string& word,int i,int j,int k,vector<vector<int>>&v){
   
   if(i<0||j<0||i>=mat.size()||j>=mat[0].size()||word[k]!=mat[i][j]||v[i][j]==1){
       
       return false;
   }
   
   if(k==word.size()-1){
       
       return true;
       
   }
   
   
    v[i][j]=1;
    bool up=solve(mat,word,i-1,j,k+1,v);
   
   
   bool down= solve(mat,word,i+1,j,k+1,v);

   bool left=solve(mat,word,i,j-1,k+1,v);
   
   
   bool right=solve(mat,word,i,j+1,k+1,v);

   
   v[i][j]=0;
   
   return up||down||left||right;
 
   
   }
   
   
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        
       char ch=word[0]; 
       int i,j;
        vector<vector<int>>v(mat.size(),vector<int>(mat[0].size(),0));
        for( i=0;i<mat.size();i++){
         for( j=0;j<mat[0].size();j++){ 
           if(mat[i][j]==ch){
           if(solve(mat,word,i,j,0,v)){
               
               return true;
           }
            
               }
        
        
        
                 }
        
                   }
 
 return false;
        
        
        
        

    }
    
    
};
    
    
    
    
    