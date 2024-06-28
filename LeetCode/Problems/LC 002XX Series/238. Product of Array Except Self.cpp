class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ios::sync_with_stdio(false);
        int product = 1;
        for (int i = 0; i < nums.size(); i++) {
            product *= nums[i];
        }
        if (product != 0) {
            for (int i = 0; i < nums.size(); i++) {
                nums[i] = product / nums[i];
            }
        }
        else {
            int cnt = 0;
            product = 1;
            for (int i = 0; i < nums.size(); i++) {
                cnt += nums[i] == 0;
                if (nums[i]) product *= nums[i];
            }
            cnt--;
            if (cnt) {
                for (int i = 0; i < nums.size(); i++) {
                    nums[i] = 0;
                }
            }
            else {
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i]) nums[i] = 0;
                    else nums[i] = product;
                }
            }
        }
        return nums;
    }
};
