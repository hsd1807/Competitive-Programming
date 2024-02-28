class Solution {
public:
    void subsets(int index, vector<vector<int>>& ans, vector<int>& temp, vector<int>& use) {
        if (index == 21) {
            ans.push_back(temp);
            return;
        }
        if(use[index]) {
            use[index]--;
            temp.push_back(index-10);
            subsets(index, ans, temp, use);
            temp.pop_back();
            use[index]++;
        }
        subsets(index+1, ans, temp, use);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> use(21,0);
        for (int i = 0; i < nums.size(); i++) {
            use[nums[i]+10]++;
        }
        subsets(0, ans, temp, use);
        return ans;
    }
};
