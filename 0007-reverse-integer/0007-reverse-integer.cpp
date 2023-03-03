class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        while(x!=0){
            long long rem = x%10;
            ans=(ans*10) + rem;
            x/=10;
        }
        if(ans>2147483641 || ans<-2147483641) return 0;
        return ans;
    }
};