class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s2.size();
        int k = s1.size();
        
        vector<int> a(128);
        vector<int> b(128);
        for(int i= 0;i<k;i++){
            a[s1[i]]++;
        }
        
        for(int i = 0;i<n;i++){
                b[s2[i]]++;
            if(i>=k){
                 b[s2[i-k]]--;
            }
               
            
            if(a == b) return true;
            
            
        }
        return false;
    }
};