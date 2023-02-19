class Solution {
public:
    int minOperations(int n) {
        int nearPower = log2(n);
        int a = pow(2, nearPower);
        int b = pow(2, nearPower + 1);
        
        int low = n-a;
        int high = b-n;
        
        if((low == 0) || (high == 0)){
            return 1;
        } 
        int temp1 = minOperations(low) + 1;
        int temp2 = minOperations(high) + 1;
        int ans = min(temp1, temp2);
        return ans;
    }
};