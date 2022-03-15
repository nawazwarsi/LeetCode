class Solution {
public:
    int minPartitions(string n) {
        int ans = *max_element(begin(n), end(n)) - '0';
        return ans;
    }
};