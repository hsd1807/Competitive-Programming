class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        for (int i = 0; i < s.size(); i++) {
            int index = i, cnt = 0;
            while(i<s.size() && s[index]==s[i]) {
                cnt++,
                i++;
            }
            if (cnt > 2) {
                ans.push_back({index,i-1});
            }
            i--;
        }
        return ans;
    }
};
