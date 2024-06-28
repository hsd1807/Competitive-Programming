class Solution {
public:
    int maxArea(vector<int>& height) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int ans = 0, left = 0, right = height.size() - 1;
        while (left < right) {
            ans = max(ans, (right - left) * min(height[left], height[right]));
            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return ans;
    }
};
