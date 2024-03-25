class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            nums[--nums[i] % n] += n;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]/n == 2) {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
