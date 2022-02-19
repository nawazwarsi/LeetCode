class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> results(nums1.size());
        std::stack<int> stack;
        std::unordered_map<int, int> hash_table;
        
        for (int i = 0; i <nums2.size(); i++)
        {
            while (!stack.empty() && nums2[i] > stack.top())
            {
                hash_table[stack.top()] = nums2[i];
                stack.pop();
            }
            stack.push(nums2[i]);
        }
        
        while (!stack.empty())
        {
            hash_table[stack.top()] = -1;
            stack.pop();
        }
        
        for (int i = 0; i < nums1.size(); i++)
        {
            results[i] = hash_table[nums1[i]];
        }
        
        return results;
    }
};