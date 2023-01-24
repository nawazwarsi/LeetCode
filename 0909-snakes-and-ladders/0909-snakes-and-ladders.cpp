class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        unordered_map<int,int> mp; // map box number to the value it holds
        int steps = 1, dir=0;
        for(int i=n-1; i>=0; --i){
            for(int j=0; j<n && dir==0; ++j){
                mp[steps] = board[i][j];
                steps++;
            }
            for(int j=n-1; j>=0 && dir==1; --j){
                mp[steps] = board[i][j];
                steps++;
            }
            dir = !dir;
        }
        steps = 0;
        // Simple BFS implementation
        queue<int> q;
        vector<int> vis(n*n);
        q.push(1);
        while(!q.empty()){
            int sz = q.size();
            steps++;
            while(sz--){
                int curr = q.front(); q.pop();
                if(vis[curr-1]) continue;
                if(curr==n*n) return steps-1;
                for(int i=1; i<=min(6,n*n); ++i){
                    if(mp[curr+i]==-1) q.push(curr+i);
                    else q.push(mp[curr+i]);
                }
                vis[curr-1]=1;
            }
        }
        return -1;
    }
};