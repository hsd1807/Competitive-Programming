class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios::sync_with_stdio(false);
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            nums[nums[i] % n] += n;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]/n > 1) {
                return i;
            }
        }
        return 0;    
    }
};
