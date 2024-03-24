class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans = {0,0}; 
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
            nums[--nums[i] % n] += n;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]/n == 0) {
                ans[1] = i + 1;
            }
            if (nums[i]/n > 1) {
                ans[0] = i + 1;
            }
        }
        return ans;   
    }
};
