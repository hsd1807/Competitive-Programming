class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int profit = 0;
        int mn = prices[0];
        
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > mn) {
                profit = max(prices[i] - mn, profit);
            }
            else {
                mn = prices[i];
            }
        }
        
        return profit;
    }
};
