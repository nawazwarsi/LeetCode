class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int ans=0,res=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<accounts[i].size(); j++){
                res+=accounts[i][j];
                ans=max(ans,res);
            }
            res=0;
        }
        return ans;
    }
};