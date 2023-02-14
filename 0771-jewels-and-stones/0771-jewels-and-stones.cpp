class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c=0,t;
        int n = jewels.size();
        for(int i=0; i<n; i++){
            t = count (stones.begin(), stones.end(), jewels[i]);
            c+=t;
        }
        return c;
    }
};
