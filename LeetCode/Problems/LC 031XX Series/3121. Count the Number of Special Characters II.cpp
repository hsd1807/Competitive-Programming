class Solution {
public:
    int numberOfSpecialChars(string word) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        vector<bool> chars(256, 0);
        vector<int> cnt(256, 0);
        for (int i = 0; i < word.size(); i++) {
            chars[word[i]] = 1;
            cnt[word[i]]++;
        }
        int special = 0;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                if (chars[word[i]] && chars[word[i] + 'a' - 'A'] && !cnt[word[i] + 'a' - 'A']) {
                    special++;
                }
                chars[word[i]] = 0;
            }
            else {
                cnt[word[i]]--;
            }
        }
        return special; 
    }
};
