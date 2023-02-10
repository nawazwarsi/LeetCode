class Solution {
public:
    bool isPalindrome(int a) {
        if(a<0){
            return false;
        }
        int x=a;
        long long sum=0;
        while(x!=0){
            long long temp = x%10;
            sum = (sum*10) + temp;
            x= x/10;
        }
        return a==sum;
    }
};