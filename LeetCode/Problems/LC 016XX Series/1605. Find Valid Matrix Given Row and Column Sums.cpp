class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        vector<vector<int>> matrix(rowSum.size(), vector<int>(colSum.size(), 0));
        for (int i = 0; i < rowSum.size(); i++) {
            for (int j = 0; j < colSum.size(); j++) {
                matrix[i][j] = min(rowSum[i], colSum[j]);
                rowSum[i] -= matrix[i][j];
                colSum[j] -= matrix[i][j];
            }
        } 
        return matrix;
    }
};
