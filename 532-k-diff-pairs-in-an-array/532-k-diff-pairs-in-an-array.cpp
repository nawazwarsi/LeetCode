class Solution {
public:
    int findPairs(vector<int>& arr, int k) {
        int n = arr.size(); // take the size of the array
        int count = 0; // variable to store count
        
        sort(arr.begin(), arr.end()); // sort the array to find unique pairs
        map<pair<int,int>, int> mp; // make a map where key is pair & value if it occurs
        
        for(int i = 0; i < n - 1; i++) // traverse from the whole array
        {
            for(int j = i + 1; j < n; j++)
            {
                if(abs(arr[j] - arr[i]) == k) // if it follows criteria
                {
                    // make a pair to find whether it is unique or not
                    pair<int,int> p = {arr[i], arr[j]}; 
                    
                     // if this pair not present in the map, then we do the computation
                    if(mp.find(p) == mp.end())
                    {
                        count++; // increment count
                        mp[p] = 1; // make its value as 1, saying that now it is present in our map
                    }
                }
            }
        }
        return count; // and at last return the count
    }
};