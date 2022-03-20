class Solution {
public:
    int countOdds(int low, int high) {
        //return (high+1)/2 - low/2;
    int k = (high-low)/2;
        if(high%2!=0 || low%2!=0){
            k+=1;
        }
        return k;
    }
};