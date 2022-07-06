// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		     int n = S.size();
		    
		    if(n == 1){
		        return {S};
		    }
		    
		    set<string> result;
		 
		    for(int i=0; i<n; i++){
		        string substring = S.substr(0,i) + S.substr(i+1, n-i-1);
		        vector<string> temp = find_permutation(substring);
		        
		        for(string str : temp){
		            result.insert(S[i]+str);
		        }
		    }
		    
		    return vector<string>(result.begin(), result.end());
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends