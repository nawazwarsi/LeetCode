class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
unique(nums.begin(),nums.end());
return set(nums.begin(),nums.end()).size();
        
    }
};