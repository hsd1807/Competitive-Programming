class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int, int> m;
        int distinct = 0, d = 0, ans = 0, start = 0, end = 0;
        for (int i = 0; i < nums.size(); i++) {
            distinct += !m[nums[i]]++;
        }
        for (m.clear(); end < nums.size(); end++) {
            d += !m[nums[end]]++;
            while (d == distinct) {
                ans += nums.size() - end;
                d -= !--m[nums[start++]];
            }
        }
        return ans;
    }
};
