class Solution {
public:
    int mySqrt(int x) {
        int low=1, high=x;
        //int mid=low+(high-low)/2;
        int ans=x;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid<=x){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};