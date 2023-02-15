class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int d = arr[1]-arr[0];
        int n=arr.size();
        for(int i=1; i<n-1; i++){
            if((arr[i+1]-arr[i])!=d){
                return false;
            }
        }
        return true;
    }
};