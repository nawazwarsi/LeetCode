class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int ans=1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i-1]!=arr[i]){
                arr[ans]=arr[i];
                ans++;
            }
        }
        return ans;
    }
};