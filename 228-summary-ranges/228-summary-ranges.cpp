class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size(), s= 0, e = 0;
        vector<string> ans;
        if(n==0) return ans;
        
        for(int i=0; i<n; i=e+1){
            s = e = i;
            while(e+1 < n && nums[e+1]==nums[e]+1) e++;
            if(e > s) 
                ans.push_back(to_string(nums[s]) + "->" + to_string(nums[e]));
            else 
                ans.push_back(to_string(nums[s]));
        }
        return ans;
    }
};