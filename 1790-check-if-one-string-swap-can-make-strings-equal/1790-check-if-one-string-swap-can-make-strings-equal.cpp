class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        int count=0;
        string t1 = s1;
        sort(t1.begin(), t1.end());
        string t2 = s2;
        sort(t2.begin(), t2.end());
        if(t1!=t2){
            return false;
        }
        for(int i=0; i<s1.length(); i++){
            if(s1[i]!=s2[i]){
                count++;
                if(count>2){
                    return false;
                }
            }
        }
        return true;
    }
};