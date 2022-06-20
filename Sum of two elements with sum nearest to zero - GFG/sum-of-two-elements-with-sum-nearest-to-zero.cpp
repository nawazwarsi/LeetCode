// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            int i=0,j=n-1;
           sort(arr,arr+n);
           i=0;
           int sum;
           int f_sum=INT_MAX;
           while(i<j){
               sum=arr[i]+arr[j];
               
               if(abs(sum)<abs(f_sum)){
                   f_sum=sum;
               }
               else if(abs(sum)==abs(f_sum)){
                   f_sum=max(sum,f_sum);
               }
               if(sum >0){
                   j--;
               }
               else{
                   i++;
               }
           }
         return f_sum; 
        }
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends