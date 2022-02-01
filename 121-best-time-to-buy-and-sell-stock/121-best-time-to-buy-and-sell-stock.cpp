class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int i=0, j=1;
        while(j<prices.size()){
            if(prices[i] > prices[j]){
                i=j;
                j++;
            }
            else{
                maxProfit = max(maxProfit, prices[j] - prices[i]);
                j+=1;
            }
        }
        return maxProfit;
    }
};