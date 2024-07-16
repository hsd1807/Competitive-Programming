class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        vector<int> ans;
        deque<int> d;
        int n = nums.size();
        for (int i = 0; i < k - 1; i++) {
            while (!d.empty() && nums[i] > nums[d.back()]) {
                d.pop_back();
            }
            d.push_back(i);
        }
        for (int i = k - 1; i < n; i++) {
            while (!d.empty() && nums[i] > nums[d.back()]) {
                d.pop_back();
            }
            d.push_back(i);
            if (d.front() <= i - k) {
                d.pop_front();
            }
            ans.push_back(nums[d.front()]);
        }
        return ans;
    }
};
