class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> newnums;
        newnums=nums;
        sort(newnums.begin(),newnums.end());
        if(newnums==nums) return true;
        sort(newnums.rbegin(),newnums.rend());
        if(newnums==nums) return true;
        else
            return false;
    }
};