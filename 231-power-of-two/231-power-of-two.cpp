class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(n<=0){
            return false;
        }
        bool flag=false;
        if(n%2==0){
            flag=true;
        }
        return flag&&isPowerOfTwo(n/2);
    }
};