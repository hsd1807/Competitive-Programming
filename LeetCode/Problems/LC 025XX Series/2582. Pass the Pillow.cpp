class Solution {
public:
    int passThePillow(int n, int time) {
        int x = time % (n - 1);
        if ((time / (n - 1)) % 2) {
            return n - x;
        }
        else {
            return 1 + x;
        }
    }
};
