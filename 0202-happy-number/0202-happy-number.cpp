class Solution {
public:
    int sum(int n){
        int ans=0;
        while(n>0){
            int rem = n%10;
            ans+=rem*rem;
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
         if(n==1){
          return true;
      }
      
      while(n!=1){
         
      if(n==7){
          return true;
      }
        if(n>=2 && n<=9){
            return false;
        }
        n = sum(n);
      }
      return true; 
    }
};