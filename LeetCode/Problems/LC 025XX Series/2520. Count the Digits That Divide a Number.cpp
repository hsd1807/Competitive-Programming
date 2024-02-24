class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int n = num;
        while (n) {
            int val = n%10;
            cnt += (num % val == 0);
            n /= 10;
        }
        return cnt; 
    }
};
