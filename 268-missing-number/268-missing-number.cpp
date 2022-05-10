class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int sum=n*(n+1)/2;
        int ans = accumulate(begin(nums), end(nums),0);
        
        return sum-ans;
    }
};