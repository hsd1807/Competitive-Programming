class Solution {
public:
    int maxMoney(int house, vector<int>& nums, vector<int>& dp) {
        if (house >= nums.size()) {
            return 0;
        }
        if (dp[house] != -1) {
            return dp[house];
        }
        else {
            return dp[house] = max(maxMoney(house + 2, nums, dp) + nums[house], maxMoney(house + 1, nums, dp));
        }
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() + 2, -1);
        return maxMoney(0, nums, dp);
    }
};
