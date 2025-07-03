class Solution {
public:
   
void result(vector<int>&nums,vector<int>&ans,int idx,vector<vector<int>>&v){

if(idx==nums.size()){

    v.push_back(ans);
    return;
 }

   ans.push_back(nums[idx]);

   result(nums,ans,idx+1,v);
   ans.pop_back();
   idx++;


   while(idx<nums.size()&&nums[idx]==nums[idx-1]){
   idx++;
   
 }

   
   result(nums,ans,idx,v);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>>v;
        vector<int>ans;
        sort(nums.begin(),nums.end());

        result(nums,ans,0,v);
        return v;


    }
};