class Solution {
public:
    int maxDepth(string s) {
        ios::sync_with_stdio(false);
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                cnt++;
            }
            else if (s[i] == ')') {
                cnt--;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};
