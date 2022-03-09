class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        int i = 0;
        int j = arr.size() - 1;
        while(i + 1 < arr.size() - 1 && arr[i] < arr[i + 1]){
            i++;
        }
        while(j - 1 > 0 && arr[j] < arr[j - 1]){
            j--;
        }
        return i == j;
    }
};