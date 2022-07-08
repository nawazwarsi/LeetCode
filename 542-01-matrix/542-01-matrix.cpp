class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int m=mat.size(), n=mat[0].size();
        int MAX_DIST = 100000;        
        vector<vector<int>> dists (m, vector<int>(n, MAX_DIST));
        int val;
       
        /* Initialize */
        for (int i=0; i<m; i++) {
           for (int j=0; j<n; j++) {
                if (mat[i][j] == 0)
                    dists[i][j] = 0;
           }
        }
        
        /* Forward pass */
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                            
                if (mat[i][j] == 0)
                    continue;
             
                int left = MAX_DIST, top = MAX_DIST;
                if (i > 0)
                    left = dists[i-1][j];
                if (j > 0)
                    top = dists[i][j-1];

                dists[i][j] = 1 + min(left, top);
            }
        }
        
        /* Backward pass */
        int left = MAX_DIST, right = MAX_DIST, top = MAX_DIST, bot = MAX_DIST;
        for (int i=m-1; i>=0; i--) {
           for (int j=n-1; j>=0; j--) {
                            
                if (mat[i][j] == 0)
                    continue;
             
                left = MAX_DIST, right = MAX_DIST, top = MAX_DIST, bot = MAX_DIST;
                if (i > 0)
                    left = dists[i-1][j];
                if (i < m-1)
                    right = dists[i+1][j];
                if (j > 0)
                    top = dists[i][j-1];
                if (j < n-1)
                    bot = dists[i][j+1];
                    
                dists[i][j] = 1 + min(left, min(right, min(top, bot)));
                
            }
        }
        
        return dists;
    }
};