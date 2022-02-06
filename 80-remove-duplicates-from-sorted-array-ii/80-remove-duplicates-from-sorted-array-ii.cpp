class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size(), i, j;
    if(n < 3) return n;
    for(i=2, j=2; j<n; i++, j++) {
        while(j<n && nums[j] == nums[i-2]) j++;
        if(j == n) break;
        swap(nums[i], nums[j]);
    }
    return i;
}
};