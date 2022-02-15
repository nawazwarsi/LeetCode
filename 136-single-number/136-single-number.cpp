class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            ans^=nums[i];
        }
        return ans;
    }
};