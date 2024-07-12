class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        for (int i = 0; i < image.size(); i++) {
            int start = 0, end = image.size() - 1;
            while (start <= end) {
                image[i][start] = !image[i][start];
                if (start != end) image[i][end] = !image[i][end];
                swap(image[i][start++], image[i][end--]);
            }
        }
        return image;
    }
};
