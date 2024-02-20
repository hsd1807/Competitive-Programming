class Solution {
public:
    void combinations (int index, int k, int sum, vector<vector<int>>& ans, vector<int>& temp) {
        if (sum == 0 && temp.size() == k) {
            ans.push_back(temp);
            return;
        }
        if (index > 9 || sum < 0 || temp.size() > k) {
            return;
        }
        combinations(index+1, k, sum, ans, temp);
        temp.push_back(index);
        combinations(index+1, k, sum-index, ans, temp);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        combinations(1, k, n, ans, temp);
        return ans;
    }
};
