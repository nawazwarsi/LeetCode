class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int temp = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if(temp == nums[i]) {
                temp++;
            }
            else if (nums[i] > temp) break;
        }
        return temp;
    }
}; 