class Solution {
public:
    int minOperations(int n) {
        int nearPower = log2(n);
        int a = pow(2, nearPower);
        int b = pow(2, nearPower + 1);
        if((n - a == 0) || (b - n == 0)){
            return 1;
        } 
        int temp1 = minOperations(n - a) + 1;
        int temp2 = minOperations(b - n) + 1;
        int ans = min(temp1, temp2);
        return ans;
    }
};