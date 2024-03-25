class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            nums[--nums[i]%n] += n;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]/n == 0) {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
