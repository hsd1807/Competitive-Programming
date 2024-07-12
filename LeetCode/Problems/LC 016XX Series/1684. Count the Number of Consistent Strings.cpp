class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        vector<bool> chars(26, 0);
        for (int i = 0; i < allowed.size(); i++) {
            chars[allowed[i] - 'a'] = 1;
        }
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            bool ok = true;
            for (int j = 0; j < words[i].size(); j++) {
                if (!chars[words[i][j] - 'a']) {
                    ok = false;
                    break;
                }
            }
            cnt += ok;
        }
        return cnt;
    }
};
