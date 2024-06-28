class Solution {
public:
    int integerBreak(int n) {
        if (n <= 3) return n - 1;
        int threes = n / 3;
        int remainder = n % 3;
        if (remainder == 1) return pow(3, threes - 1) * 4;
        else if (remainder) return pow(3, threes) * remainder; 
        else return pow(3, threes);
    }
};
