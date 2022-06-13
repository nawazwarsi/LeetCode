class Solution {
public:
    void constructArray(int n, int k, vector<vector<int>> &ans, vector<int> &comb, int begin) {
        if(!k) {
            ans.push_back(comb);
            return;
        }
        else {
            for(int i = begin; i <= n and k; i++){
                comb.push_back(i);
                constructArray(n, k - 1, ans, comb, i + 1);
                comb.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>comb;
        constructArray(n, k, ans, comb, 1);
        return ans;
    }
};