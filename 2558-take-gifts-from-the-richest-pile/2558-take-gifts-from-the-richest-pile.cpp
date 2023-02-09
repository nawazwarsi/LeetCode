class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k--){
            int n=gifts.size(), index;
            int maxi = *max_element(gifts.begin(), gifts.end());
            for(int i=0; i<n; i++){
                if(gifts[i]==maxi){
                    index=i;
                }
                
            }
            gifts[index] = floor(sqrt(gifts[index]));
        }
        long long sum=0;
        for(int i=0; i<gifts.size(); i++){
            sum+=gifts[i];
        }
        return sum;
    }
};