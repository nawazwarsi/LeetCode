class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int sizeofs1=s1.size();
        int sizeofs2=s2.size();
        
        if(sizeofs1>sizeofs2)  return false;
        
        vector<int>check1(26,0);   //Creating vector for store the  frequency of s1
        vector<int>check2(26,0);     //Creating vector for store the  frequency of s2
        
        for(int i=0;i<sizeofs1;i++){
            check1[s1[i] - 'a']++;   //Store the frequncy of s1
            check2[s2[i] - 'a']++;  //Store the frequncy of s2
        }
         if(check1==check2){   // If these vectors are equal then we need to return true
            return true;
        }
        
        for(int i=sizeofs1;i<sizeofs2;i++){
            check2[s2[i-sizeofs1] - 'a']--;     //Remove the [i-sizeofs1]th element from check2
            check2[s2[i] - 'a']++;                 //Adding the current element in check2
            if(check1==check2) return true;   //If these vectors are equal then we need to return true
        }
        return false;
    }
};