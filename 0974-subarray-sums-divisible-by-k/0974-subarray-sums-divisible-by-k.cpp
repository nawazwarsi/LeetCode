class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count = 0, sum = 0;
        unordered_map<int, int> m{{0, 1}};
        for(int num : nums) {
            sum = (sum + num) % k;
            if(sum < 0) sum += k;
            count += m[sum]++;
        }
        return count;
    }
};