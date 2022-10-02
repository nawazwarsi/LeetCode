class Solution {
    int find(vector<vector<int>>& mem, int n, int k, int target){
    /*
		Base Conditions
	*/
		if(n == 0 && target == 0) return 1;
    
		/* No ways possible */
        if( n <= 0 || target <= 0) return 0;
        
		/*
			Return if values is already stored.
		*/
		
        if(mem[n][target] != -1)    return mem[n][target];
        
        int res = 0;
		
		/*
			Iterate for all possible die faces and keep adding the values to the final result.
		*/
        for(int i = 1 ; i <= k  && i <= target; i++){
            res = (res + (find(mem,n-1,k,target-i)% 1000000007)) % 1000000007;
        }
        
        return mem[n][target] = res;
    }
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> mem(n+1,vector<int>(target+1,-1));
        mem[0][0] = 1;
        return find(mem,n,k,target);
    }
};