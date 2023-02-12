class Solution {
public:
    #define ll long long
    ll solve(int node,vector<int>adj[],vector<int>&vis,int seats,ll &ans){
        vis[node]=1;
        ll cnt=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                cnt+=solve(it,adj,vis,seats,ans);
            }
        }
         if(node!=0){
             ll cars=(cnt)/seats;
            if(cnt%seats)cars++;
             ans+=cars;
            }
       
        return cnt;
        
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n=roads.size();
        vector<int>adj[n+1];
        for(auto it:roads){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vector<int>vis(n+1,0);
        ll ans=0;
        solve(0,adj,vis,seats,ans);
        return ans;
        
        
    }
};
