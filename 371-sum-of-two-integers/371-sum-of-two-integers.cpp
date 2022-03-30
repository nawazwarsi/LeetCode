class Solution {
public:
    int getSum(int a, int b) {
         while (b != 0)
    {
        // carry should be unsigned to
        // deal with -ve numbers
        // carry now contains common
        //set bits of x and y
        unsigned carry = a & b;
 
        // Sum of bits of x and y where at
        //least one of the bits is not set
        a = a ^ b;
 
        // Carry is shifted by one so that adding
        // it to x gives the required sum
        b = carry << 1;
    }
    return a;
    }
};