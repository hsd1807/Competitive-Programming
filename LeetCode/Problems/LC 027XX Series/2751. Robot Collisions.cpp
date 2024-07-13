class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        vector<vector<int>> line;
        for (int i = 0; i < positions.size(); i++) {
            line.push_back({positions[i], healths[i], directions[i], i});
        }
        sort(line.begin(), line.end());
        stack<int> st;
        vector<vector<int>> remaining;
        for (int i = 0; i < line.size(); i++) {
            if (line[i][2] == 'L') {
                while (!st.empty() && line[st.top()][1] < line[i][1] && line[st.top()][2] == 'R') {
                    st.pop();
                    line[i][1]--;
                }
                if (!st.empty() && line[st.top()][1] > line[i][1] && line[st.top()][2] == 'R') {
                    line[st.top()][1]--;
                }
                else if (!st.empty() && line[st.top()][1] == line[i][1] && line[st.top()][2] == 'R') {
                    st.pop();
                }
                else if (line[i][1]) {
                    remaining.push_back(line[i]);
                }
            }
            else {
                st.push(i);
            }
        }
        while(!st.empty()) {
            remaining.push_back(line[st.top()]);
            st.pop();
        }
        for (int i = 0; i < remaining.size(); i++) {
            swap(remaining[i][0], remaining[i][3]);
        }
        sort(remaining.begin(), remaining.end());
        vector<int> ans;
        for (int i = 0; i < remaining.size(); i++) {
            if (remaining[i][1]) {
                ans.push_back(remaining[i][1]);
            }
        }
        return ans;
    }
};
