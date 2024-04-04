class Solution {
    int rows[4] = {1,-1,0,0};
    int cols[4] = {0,0,-1,1};
public:
    bool check(int i, int j, int row, int col) {
        return i>=0 && j>=0 && i<row && j<col;
    }

    bool search (int i, int j, int index, vector<vector<char>>& board, string& word, vector<vector<bool>>& visited) {
        if (index == word.size()-1) {
            return board[i][j] == word[index];
        }
        visited[i][j] = 1;
        if (board[i][j] == word[index]) {
            int k;
            for (k = 0; k < 4; k++) {
                if (check(i+rows[k], j+cols[k], board.size(), board[0].size()) && !visited[i+rows[k]][j+cols[k]]) {
                    if (search(i+rows[k], j+cols[k], index+1, board, word, visited))
                        break;
                } 
            }
            visited[i][j] = 0;
            return k == 4 ? 0 : 1;
        }
        else {
            visited[i][j] = 0;
            return 0;
        }
    }

    bool exist(vector<vector<char>>& board, string word) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        if (word.size() == 1 && board.size() == 1 && board[0].size() == 1) return board[0][0] == word[0];
        unordered_map<char, bool> m;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                m[board[i][j]] = 1;
            }
        }
        for (int i = 0; i < word.size(); i++) {
            if (!m[word[i]]) {
                return 0;
            }
        }
        bool found = false;
        vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), 0));
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == word[0]) {
                    if (search(i, j, 0, board, word, visited)) {
                        found = true;
                        break;
                    }
                }
            }
            if (found) break;
        }
        return found;  
    }
};
