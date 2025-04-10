class Solution {
public:
    int find(long long n) {
        if (n == 1) {
            return 0;
        }
        if (n % 2) {
            return min(find(n - 1), find(n + 1)) + 1;
        } else {
            return find(n / 2) + 1;
        }
    }
    int integerReplacement(int n) {
        return find(n);
    }
};
