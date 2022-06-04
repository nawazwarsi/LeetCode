class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        //sort(nums.begin(), nums.end());
        int n=nums.size(), i=0, j=n-1;
        
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        /*while(i<j){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            else if((nums[i]+nums[j])>target){
                j--;
            }
            else{
                i++;
            }
        }
        */
        //ans.push_back(-1);
        //ans.push_back(-1);
        return ans;
    }
};