class Solution {
public:
    int maxDepth(string s) {
        ios::sync_with_stdio(false);
        int ans = 0;
        stack<char> depth;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                depth.push('(');
            }
            else if (s[i] == ')') {
                depth.pop();
            }
            ans = max(ans, (int) depth.size());
        }
        return ans;
    }
};
