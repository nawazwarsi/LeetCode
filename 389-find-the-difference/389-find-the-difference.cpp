class Solution {
public:
    char findTheDifference(string s, string t) {
        int S=0;
        int T=0;
        for(auto count:s){
            S=S+count;
        }
        for(auto count:t){
            T=T+count;
        }
        return T-S;
    }
};