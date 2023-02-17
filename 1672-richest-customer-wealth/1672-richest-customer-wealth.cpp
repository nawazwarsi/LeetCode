class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int ans=0, res=0;
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<a[i].size(); j++){
                ans+=a[i][j];
            }
            res=max(ans,res);
            ans=0;
        }
        return res;
    }
};