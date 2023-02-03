class Solution {
public:
string convert(string s, int numRows) {
    if (numRows == 1)
        return s;
    string res = "";
    for(int i = 0; i<numRows; i++){
        int skip = 2*(numRows - 1); 
        for(int j = i; j<s.length(); j+= skip){  
            res+=s[j];
            int midskip = j + skip - 2 * i; 
            if (i>0 && i<numRows-1 && midskip <s.length()) 
                res+= s[midskip];
            }
        }
        return res;  
    }
};