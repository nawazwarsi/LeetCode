class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(), m = mat[0].size();
        if (m * n != r * c) return mat;
        vector<vector<int>> res(r, vector<int> (c, 0));
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                res[x][y] = mat[i][j];
                if (++y >= c) {
                    y = 0;
                    x++;
                }
            }
        }
        return res;
    }
};