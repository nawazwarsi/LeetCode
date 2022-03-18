class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> s;
    for(auto word: sentence){
       // for(auto c: word){
            s.insert(word);
            if(s.size()==26){
                return true;
            }
        //}
    }
    return false;
    }
};