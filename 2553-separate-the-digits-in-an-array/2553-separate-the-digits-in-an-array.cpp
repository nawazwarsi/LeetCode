class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
            string temp = to_string(nums[i]);
            for(int j=0; j<temp.length(); j++){
                int temp2 = (temp[j]-'0');
                ans.push_back(temp2);
            }
        }
        return ans;
    }
};