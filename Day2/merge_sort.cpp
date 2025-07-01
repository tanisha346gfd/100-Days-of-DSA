// Problem Link: https://www.geeksforgeeks.org/problems/merge-sort/1

class Solution {
  public:


 void merge(vector<int>&arr,int l,int r,int mid){
    int si=l;
    int ei=mid+1;
    vector<int>temp;



    while(si<=mid&&r>=ei){
        
        
        if(arr[si]>arr[ei]){
            temp.push_back(arr[ei]);
            
            ei++;
            
        }
        else {
            
            
            temp.push_back(arr[si]);
            si++;
        }
   
        
    }
while(si<=mid){
   temp.push_back (arr[si]);
   si++;
    
    
    
}

while(ei<=r){
    
    temp.push_back(arr[ei]);
    ei++;
}


for(int i=0;i<temp.size();i++){
    
arr[i+l]=temp[i];
    
    
}






   }
    
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r){
            
            return; 
            
        }

        int mid=l+(r-l)/2;
        
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,r,mid);
        
        
        
        
        
        
        
        
        
        
        
    }
};