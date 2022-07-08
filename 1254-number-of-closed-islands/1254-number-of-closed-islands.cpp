class Solution {
public:
    void dfs(vector<vector<int>> &grid, int i, int j, int n, int m, int &f)
    {
	// boundary condition
        if(i<0 || i>=n || j<0 || j>=m)
        {
		// make the flag as 1
            f=1;
            return;
        }
        if(grid[i][j] == 1)
        {
            return;
        }
		// mark the cell as 1 making it visited
        grid[i][j] = 1;
        
        dfs(grid, i+1, j, n, m, f);
        dfs(grid, i-1, j, n, m, f);
        dfs(grid, i, j+1, n, m, f);
        dfs(grid, i, j-1, n, m, f);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if(grid[i][j] == 0)
                {
                    int f = 0;
                    dfs(grid, i, j, n, m, f);
                    if(f==0)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};