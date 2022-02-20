class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int, int> pairmp;
        int res = 0;
        
        for(int i=0; i<nums.size(); i++) {
            res = res + pairmp[nums[i]];
            pairmp[nums[i]]++;
        }
        
        return res;
    }
};