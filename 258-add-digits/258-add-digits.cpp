class Solution {
public:
    int addDigits(int num) {
       if(num and num%9 ==0) return 9;
        else return num%9;
    }
};