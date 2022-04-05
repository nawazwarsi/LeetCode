class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int counter=1;
        for(int i=0; i<target.size(); i++){
            while(target[i]!=counter){
                ans.push_back("Push");
                ans.push_back("Pop");
                counter++;
            }
            ans.push_back("Push");
            counter++;
        }
        return ans;
    }
};