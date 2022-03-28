class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0, n=mat.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<mat[i].size(); j++){
                if(i==j || i+j+1==n){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};