class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            int x = i;
            while (x) {
                ans[i] += x % 2 == 1;
                x /= 2;
            }
        }
        return ans;
    }
};
