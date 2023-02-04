class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> a(128);
        vector<int> b(128);
        for(int i=0; i<s1.size(); i++){
            a[s1[i]]++;
        }
        for(int i=0; i<s2.size(); i++){
            b[s2[i]]++;
            if(i>=s1.size()){
                 b[s2[i-s1.size()]]--;
            }
            if(a == b) return true;
        }
        return false;
    }
};