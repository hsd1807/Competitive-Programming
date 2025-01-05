class Solution {
  public:
    int maxMoney(int house, bool canSteal, int n, int k, vector<int>& dp1, vector<int>& dp2) {
        if (house == n) {
            if (canSteal) {
                return k;
            }
            else {
                return 0;
            }
        }
        if (canSteal) {
            if (dp1[house] != - 1) {
                return dp1[house];
            }
            else {
                dp1[house] = max(k + maxMoney(house + 1, 0, n, k, dp1, dp2), maxMoney(house + 1, 1, n, k, dp1, dp2));
                return dp1[house];
            }
            
        }
        else {
            if (dp2[house] != -1) {
                return dp2[house]; 
            }
            else {
                dp2[house] = maxMoney(house + 1, 1, n, k, dp1, dp2);
                return dp2[house];
            }
        }
    }
    int maximizeMoney(int N , int K) {
        vector<int> dp1(N + 1, -1), dp2(N + 1, -1);
        return max(maxMoney(1, 1, N, K, dp1, dp2), maxMoney(1, 0, N, K, dp1, dp2));
    }
};
