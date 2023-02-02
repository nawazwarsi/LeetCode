class Solution {
public:

    bool isAlienSorted(vector<string>& words, string order) {
        
       vector<pair<string,string>>vp;
       unordered_map<char,char>mpp;

       for(int i = 0 ; i < order.size(); ++i) mpp[order[i]] = char(i +'a');

       for(int i = 0; i < words.size(); ++i)
       {
           string temp;

           for(auto &it : words[i]) temp.push_back(mpp[it]);

           vp.push_back({temp, words[i]});
       }

       sort(vp.begin(), vp.end());

       for(int i = 0; i < words.size(); ++i)  if(words[i] != vp[i].second) return false;
    
       return true;
        
    }
};