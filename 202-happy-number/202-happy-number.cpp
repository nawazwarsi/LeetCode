class Solution {
public:
    int sumOfSq(int n){
    int rem=0;
    int ans=0;
    while(n>0){
        rem=n%10;
        ans=ans + rem*rem;
        n=n/10;
    }
    return ans;
}

bool isHappy(int n) {
   if(n==1)return true;    
    while(n!=1){
        if(n==7) return true;
        if(n>=2 and n<=9) return false;
        n=sumOfSq(n);    
    }
    return true;
}
};