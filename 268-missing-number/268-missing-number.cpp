class Solution {
public:
    int missingNumber(vector<int>& nums) { 
        return nums.size()*(nums.size()+1)/2 - accumulate(begin(nums), end(nums),0);
    }
};