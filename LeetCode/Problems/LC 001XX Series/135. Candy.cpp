class Solution {
public:
    int candy(vector<int>& ratings) {
        ios::sync_with_stdio(false);
        vector<int> candies(ratings.size(), 1);
        for (int i = 1; i < ratings.size(); i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }
        for (int i = ratings.size() - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }
        int ans = 0;
        for (int i = 0; i < candies.size(); i++) {
            ans += candies[i];
        }
        return ans;   
    }
};
