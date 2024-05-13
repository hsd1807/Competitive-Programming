class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long long reverse = 0;
        for (int i = 1; i <= 32; i++) {
            reverse += pow(2, 32 - i) * (n % 2);
            n /= 2;
        }
        return reverse;
    }
};
