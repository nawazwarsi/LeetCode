class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int ans=0,res=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<accounts[i].size(); j++){
                ans+=accounts[i][j];
                res=max(res,ans);
            }
            ans=0;
        }
        return res;
    }
};