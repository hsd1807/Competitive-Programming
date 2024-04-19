class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int n = nums.size();
        vector<int> ans(nums.size(), -1);
        stack<int> st;
        for (int i = 0; i < nums.size() * 2; i++) {
            while (!st.empty() && nums[i % n] > nums[st.top()]) {
                ans[st.top()] = nums[i % n];
                st.pop();
            }
            st.push(i % n);
        }
        return ans;
    }
};
