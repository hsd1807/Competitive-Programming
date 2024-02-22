class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int index = -1;
        for (int i = 0; i < s.size(); i++) {
            if (i % k == 0) {
                ans.push_back("");
                index++;
            }
                ans[index].push_back(s[i]);
        }
        if (ans[index].size()) {
            while (ans[index].size() < k)
                ans[index].push_back(fill);
        }
        return ans;   
    }
};
