class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0;
        unordered_map<int, int> m;
        int count = 0;
        int start = 0;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
            if (m[nums[i]] >= 2) {
                count += m[nums[i]] - 1;
                while (count >= k) {
                    ans += nums.size()- i;
                    m[nums[start]]--;
                    if (m[nums[start]] >= 1) {
                        count -= m[nums[start]];
                    }
                    start++;
                }
            }
        }
        return ans;
    }
};
