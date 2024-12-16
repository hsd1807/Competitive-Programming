class Solution {
  public:
    bool isValid(int i, int j, vector<vector<char>>& grid) {
        return i >= 0 && j >=0 && i < grid.size() && j < grid[0].size() && grid[i][j] == '1';
    }

    void island(int x, int y, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
        if (visited[x][y]) {
            return;
        }
        visited[x][y] = 1;
        for (int i = -1; i < 2; i++) {
            for (int j = -1; j < 2; j++) {
                if (isValid(x + i, y + j, grid)) {
                    island(x + i, y + j, grid, visited);
                }
            }
        }
    }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size(), islands = 0;
        vector<vector<bool>> visited(n, vector<bool>(m, 0));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    islands++;
                    island(i, j, grid, visited);
                }
            }
        }
        
        return islands;
    }
};
