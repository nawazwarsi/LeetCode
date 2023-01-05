//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        // code here
         map<string,bool> mp;
        string res="";
        for(auto i: words){
            mp[i]=true;
        }
        sort(words.begin(),words.end());
        for(auto i: words){
            string x=i;
            string y="";
            for(int j=0;j<x.length();j++){
                y+=x[j];
                if(!mp[y]){
                    break;
                }
            }
            if(y==x&&y.size()>res.size()){
                res=y;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends