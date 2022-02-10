class Solution 
{
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mp;
        mp[0] = 1; // Because getting zero sum is always possible.
        int sum = 0;
        int ans = 0;
        for(int i = 0;i<nums.size();i++)
        {
            sum = sum + nums[i];
            int req =  sum - k;
            if(mp.find(req)!=mp.end())
            {
                ans+=mp[req];  // use the number of times the required sum has already occurred 
            }
            
            mp[sum]+=1;
        }
        
        return(ans);
    }
};