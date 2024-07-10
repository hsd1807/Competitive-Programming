class Solution {
public:
    int minOperations(vector<string>& logs) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int depth = 0;
        for (int i = 0; i < logs.size(); i++) {
            if (depth && logs[i] == "../") {
                depth--;
            }
            else if (logs[i] != "./" && logs[i] != "../") {
                depth++;
            }
        }
        return depth;
    }
};
