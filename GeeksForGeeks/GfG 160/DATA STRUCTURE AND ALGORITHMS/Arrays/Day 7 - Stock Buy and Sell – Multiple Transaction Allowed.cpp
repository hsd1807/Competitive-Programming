class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int profit = 0;
        int mn = prices[0];
        for (int i = 1; i < prices.size() - 1; i++) {
            if (prices[i] > prices[i + 1]) {
                if (prices[i] - mn > 0) {
                    profit += prices[i] - mn;
                }
                mn = prices[i + 1];
            }
            mn = min(mn, prices[i]);
        }
        if (prices[prices.size() - 1] - mn > 0) {
            profit += prices[prices.size() - 1] - mn;
        }
        return profit;
    }
};
