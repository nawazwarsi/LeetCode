class Solution {
public:
        int numberOfDigits(int n){
     int count = 0;
     while(n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int findNumbers(vector <int> &a)
{
    int result = 0;
    for(int &i : a)
        if(numberOfDigits(i) % 2 == 0)
            result++;
    return result;
}
};