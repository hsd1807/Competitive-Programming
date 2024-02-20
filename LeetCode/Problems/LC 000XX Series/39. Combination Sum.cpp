class Solution {
public:
    void combinations(vector<int>& arr, int index, int sum, vector<vector<int>>& ans, vector<int>& temp) {
        if (sum == 0) {
            ans.push_back(temp);
            return;
        }
        if (index == arr.size() || sum < 0)
            return;
        combinations(arr, index+1, sum, ans, temp);
        temp.push_back(arr[index]);
        combinations(arr, index, sum-arr[index], ans, temp);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        combinations(candidates, 0, target, ans, temp);
        return ans;
    }
};
