class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> s;
    for(auto letter: sentence){
            s.insert(letter);
            if(s.size()==26){
                return true;
            }
    }
    return false;
    }
};