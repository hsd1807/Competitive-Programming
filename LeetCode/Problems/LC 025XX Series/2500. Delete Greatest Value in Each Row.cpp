class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            sort(grid[i].begin(), grid[i].end());
            if (i) {
                for (int j = 0; j < grid[i].size(); j++) {
                    grid[i][j] = max(grid[i][j], grid[i - 1][j]);
                }
            }
            if (i == grid.size() - 1) {
                for (int j = 0; j < grid[i].size(); j++) {
                    ans += grid[i][j];
                }
            }
        }
        return ans;
    }
};
