// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends




int findElement(int a[], int n) {
   int maxe[n];
   int mini[n];
   maxe[0] = a[0];
   mini[n-1] = a[n-1];
   for(int i=1;i<n;i++)
   {
       maxe[i] = max(maxe[i-1],a[i]);
       mini[n-1-i] = min(mini[n-i] , a[n-1-i]);
       
   }
   for(int i=0;i<n;i++)
   {
       maxe[i] = maxe[i] - mini[i];
   }
   int i = 1;
  
   while(i<n)
   {
       if(maxe[i] == 0 && i<(n-1))
       {
           
           return a[i];
           
           
       }
       i++;
   }
   return -1;
}
