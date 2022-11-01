class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> temp;
        int i=0;
        sort(arr.begin(), arr.end());
        while(i<arr.size()){
            int count=1;
        for(int j=i+1; j<arr.size(); j++){
           if(arr[i]==arr[j]){
              count++;
           }
            else{
                break;
            }
        }
             temp.push_back(count);
            i=i+count;
        }
        sort(temp.begin(),temp.end());
        for(int i=0; i<temp.size()-1; i++){
            if(temp[i]==temp[i+1]){
                return false;
            }
        }
        return true;
    }
};
