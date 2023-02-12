class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0; i<(n/2); i++){
            string s1 = to_string(nums[i]);
            string s2 = to_string(nums[n-i-1]);
            string ans = "";
            ans+=s1;
            ans+=s2;
            sum+=stoi(ans);
        }
        if(n%2==0){
            return sum;
        }
        else{
            return sum+nums[n/2];
        }
        
    }
};