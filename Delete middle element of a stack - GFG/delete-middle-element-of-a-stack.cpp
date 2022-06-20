// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++



class Solution
{
   public:
   //Function to delete middle element of a stack.
   void helper(stack<int>&s, int n, int m,  int i){
       if(i==m){
           s.pop();
           return;
       }
       int t = s.top();
       s.pop();
       helper(s, n, m, i+1);
       s.push(t);
   }
   void deleteMid(stack<int>&s, int n)
   {
       // code here.. 
       int m = n/2;
       helper(s, n, m, 0);
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends