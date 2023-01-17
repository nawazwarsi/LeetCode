class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int zero=0, one=0,mini = INT_MAX;
        int res[s.size()];
        int totalzeroes = count(s.begin(), s.end(), '0');
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
                zero++;
            res[i] = one+totalzeroes-zero;
            if(s[i]=='1')
                one++;
            if(mini>res[i])
                mini = res[i];
        }
        return mini;
    }
};