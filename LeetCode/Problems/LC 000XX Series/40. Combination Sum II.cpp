class Solution {
public:
    void combinations(vector<int>& arr, int index, vector<vector<int>>& ans, vector<int>& temp, vector<int>& count, int target) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        if (index == 51 || target < 0) {
            return;
        }
            if (count[index]) {
                count[index]--;
                temp.push_back(index);
                combinations(arr, index, ans, temp, count, target-index);
                temp.pop_back();
                count[index]++;
            }
            combinations(arr, index+1, ans, temp, count, target);
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> count(51, 0);
        for (int i = 0; i < candidates.size(); i++) {
            count[candidates[i]]++;
        }
        combinations(candidates, 1, ans, temp, count, target);
        return ans;
    }
};
