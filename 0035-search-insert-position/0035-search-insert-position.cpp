class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n=arr.size(), i=0;
        while(i<n){
            if(arr[i]==target){
                return i;
            }
            else if(arr[i]>target){
                    return i;
            }
            i++;
        }
        return i;
    }
};