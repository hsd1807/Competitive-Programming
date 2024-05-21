class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios::sync_with_stdio(false);
        int mn = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            profit = max(profit, prices[i] - mn);
            mn = min(prices[i], mn);
        }
        return profit;
    }
};
