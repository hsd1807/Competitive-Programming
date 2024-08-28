class Solution {
public:
    bool isValid(int i, int j, vector<string>& board) {
        for (int row = 0; row < i; row++) {
            if (board[row][j] == 'Q') {
                return false;
            }
        }

        int diaI = i - 1, diaJ = j - 1;
        while (diaI >= 0 && diaJ >= 0) {
            if (board[diaI--][diaJ--] == 'Q') {
                return false;
            }
        }

        diaI = i - 1, diaJ = j + 1;
        while(diaI >= 0 && diaJ < board.size()) {
            if (board[diaI--][diaJ++] == 'Q') {
                return false;
            }
        }

        return true;
    }
    void placeNQueens(int n, int row, vector<string>& board, vector<vector<string>>& ans) {
        if (row == n) {
            ans.push_back(board);
            return;
        }
        for (int j = 0; j < n; j++) {
            if (isValid(row, j, board)) {
                board[row][j] = 'Q';
                placeNQueens(n, row + 1, board, ans);
                board[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                board[i].push_back('.');
            }
        }
        placeNQueens(n, 0, board, ans); 
        return ans;
    }
};
