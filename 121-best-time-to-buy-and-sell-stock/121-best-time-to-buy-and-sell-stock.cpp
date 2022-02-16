class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit;
        int ans=0;
        int i=0,j=1;
        while(i<prices.size() && j<prices.size()){
            if(prices[i]>prices[j]){
                i=j;
                j++;
            }
            else{
                ans=max(ans,prices[j]-prices[i]);
                //i++;
                j++;
            }
        }
        return ans;
    }
};