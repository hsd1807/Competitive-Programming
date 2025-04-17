class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<int> dp(word2.size() + 1, 0);
        for (int i = 1; i <= word1.size(); i++) {
            int prev = dp[0];
            for (int j = 1; j <= word2.size(); j++) {
                if (word1[i - 1] == word2[j - 1]) {
                    int val = dp[j];
                    dp[j] = 1 + prev;
                    prev = val;
                } else {
                    prev = dp[j];
                    dp[j]= max(dp[j - 1], dp[j]);
                }
            }
        }
        return word1.size() + word2.size() - 2 * dp[word2.size()];
    }
};
