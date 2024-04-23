class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        stack<int> st;
        int index;
        int n = heights.size();
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                index = st.top();
                st.pop();
                if (!st.empty()) {
                    ans = max(ans, heights[index] * (i - st.top() - 1));
                }
                else {
                    ans = max(ans, heights[index] * (i));
                }
            }
            st.push(i);
        }
        while (!st.empty()) {
            index = st.top();
            st.pop();
            if (!st.empty()) {
                ans = max(ans, heights[index] * (n - st.top() - 1));
            }
            else {
                ans = max(ans, heights[index] * (n));
            }
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int ans = 0,rows = matrix.size(), cols = matrix[0].size();
        vector<int> heights(cols, 0);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '0') {
                    heights[j] = 0;
                }
                else {
                    heights[j]++;
                }
            }
            ans = max(ans, maxArea(heights));
        }
        return ans;
    }
};
