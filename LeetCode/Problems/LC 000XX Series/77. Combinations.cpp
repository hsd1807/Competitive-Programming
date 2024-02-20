class Solution {
public:
    void combinations(int n, int index, int k, vector<vector<int>>& ans, vector<int>&temp) {
        if (temp.size() == k) {
            ans.push_back(temp);
            return;
        }
        if (index == n+1) {
            return;
        }
        temp.push_back(index);
        combinations(n, index+1, k, ans, temp);
        temp.pop_back();
        combinations(n, index+1, k, ans, temp);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        combinations(n, 1, k, ans, temp);
        return ans;
    }
};
