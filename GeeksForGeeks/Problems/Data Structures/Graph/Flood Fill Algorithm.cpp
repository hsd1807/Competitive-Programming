class Solution {
  public:
    bool isValid(int x, int y, int rows, int cols) {
        return x < rows && y < cols && x >= 0 && y >= 0;
    }
    void flood(int x, int y, int color, vector<vector<int>>& image) {
        if (image[x][y] == -1) {
            return;
        }
        image[x][y] = -1;
        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        for (int i = 0; i < 4; i++) {
            if (isValid(x + directions[i][0], y + directions[i][1], image.size(), image[0].size()) && image[x + directions[i][0]][y + directions[i][1]] == color) {
                flood(x + directions[i][0], y + directions[i][1], color, image);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (image[sr][sc] == newColor) {
            return image;
        }
        flood(sr, sc, image[sr][sc], image);
        for (int i = 0; i < image.size(); i++) {
            for (int j = 0; j < image[0].size(); j++) {
                if (image[i][j] == -1) {
                    image[i][j] = newColor;
                }
            }
        }
        return image;
    }
};
