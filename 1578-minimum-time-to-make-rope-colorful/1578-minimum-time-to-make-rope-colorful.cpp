class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0, i=0;
        for(int i=0; i<neededTime.size()-1; i++){
            if(colors[i]==colors[i+1]){
                ans+=min(neededTime[i],neededTime[i+1]);
                 if(neededTime[i]>neededTime[i+1])
                     swap(neededTime[i],neededTime[i+1]);
            }
        }
        return ans;
    }
};