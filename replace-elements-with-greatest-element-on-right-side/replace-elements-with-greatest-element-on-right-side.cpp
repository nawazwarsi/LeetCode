class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mx=-1;
        for (int i = arr.size() - 1; i >= 0; --i)
            mx = max(mx, exchange(arr[i], mx));
        return arr;
    }
};