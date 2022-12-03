class Solution {
public:
    static bool cmp(pair<char,int>& a,pair<char,int>& b)
    {
        return a.second>b.second;
    }
    string frequencySort(string s) {
        vector<pair<char,int>> v(256);
        for(auto it:s)
        {
            v[it].first=it;
            v[it].second+=1;
        }
        
        sort(v.begin(),v.end(),cmp);
        
        string ans;
        
        for(auto it:v) 
        {
            for(int j=0;j<it.second;j++) ans+=it.first;
        }
        
        return ans;
    }
};