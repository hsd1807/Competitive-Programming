class Solution {
public:
    int maximum69Number (int num) {
        int reverse = 0;
        while (num) {
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }
        bool set = true;
        while (reverse) {
            if (set && reverse % 10 == 6) {
                num = num * 10 + 9;
                set = false;
            }
            else {
                num = num * 10 + reverse % 10;
            }
            reverse /= 10;
        }
        return num;
    }
};
