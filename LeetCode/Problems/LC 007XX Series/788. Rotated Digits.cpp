class Solution {
public:
    int rotatedDigits(int n) {
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            bool good = false;
            int x = i;
            while (x) {
                int digit = x % 10;
                if (digit == 3 || digit == 4 || digit == 7) {
                    good = false;
                    break;
                }
                if (digit == 2 || digit == 5 || digit == 6 || digit == 9) {
                    good = true;
                }
                x /= 10;
            }
            if (good) ans++;
        }
        return ans;
    }
};
