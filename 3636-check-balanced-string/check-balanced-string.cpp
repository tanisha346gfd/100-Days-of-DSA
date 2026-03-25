class Solution {
public:
    bool isBalanced(string num) {
        
        int ev=0,od=0,x;
        for(int i=0;i<num.length();i++){
x=num[i]-'0';
if(i%2==0){
    
    ev=ev+x;

}
else{
    od=od+x;
}

        }

if(ev==od){
    return true;
}

return false;


    }
};