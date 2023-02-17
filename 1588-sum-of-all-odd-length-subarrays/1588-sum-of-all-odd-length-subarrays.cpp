class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res=0, sum=0;
        for(int i=0; i<arr.size(); i++){
            for(int j=i; j<arr.size(); j++){
                
                if((j-i+1)%2==1){
                    
                    for(int k=i; k<j+1; k++){
                        sum+=arr[k];
                    }
                    res+=sum;
                    sum=0;
                }
                
            }
            
        }
        return res;
    }
};