class Solution {
public:
    bool bSearch(vector<int> m, int target){
        int mid;
        int l=0;
        int h=m.size()-1;
        while(l<=h){
            mid=l+(h-l)/2;
            if(m[mid]==target){
                return true;
            }
            else if(m[mid]<target){
                l=mid+1;
            }
            else if(m[mid]>target){
                h=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int flag=0;
        for(int i=0;i<matrix.size();i++){
            if(bSearch(matrix[i], target)){
                flag++;
				break;
            }
        }
        if(flag>0){
            return true;
        }
        else{
            return false;
        }
    }
};