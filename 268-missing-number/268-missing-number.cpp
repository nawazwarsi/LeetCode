class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(); 
        return n*(n+1)/2 - accumulate(begin(nums), end(nums),0);
    }
};