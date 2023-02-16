class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int temp = (c[1][1]-c[0][1]);
        int temp1 = (c[1][0]-c[0][0]);
        for(int i=2; i<c.size(); i++){
            if(temp1*(c[i][1]-c[0][1]) != temp*(c[i][0]-c[0][0])){
                return false;
            }
        }
        return true;
    }
};