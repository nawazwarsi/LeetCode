class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> res;
        for(auto i:sentence){
            res.insert(i);
        }
        if(res.size()==26){
            return true;
        }
        else{
            return false;
        }
        
    }
};