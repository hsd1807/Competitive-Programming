class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            bool bit = 1;
            for (int x = nums[i]; x; x /= 10) bit = !bit;
            ans += bit;
        }
        return ans;
    }
};
