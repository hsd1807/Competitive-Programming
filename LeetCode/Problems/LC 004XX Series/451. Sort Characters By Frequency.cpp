class Solution {
public:
    string frequencySort(string s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        vector<int> chars(256, 0);
        for (int i = 0; i < s.size(); i++) {
            chars[s[i]]++;
        }
        vector<vector<int>> ans;
        for (int i = 0; i < 256; i++) {
            ans.push_back({chars[i], i});
        }
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());
        s.clear();
        for (int i = 0; ans[i][0] > 0; i++) {
            for (int j = 0; j < ans[i][0]; j++) {
                s += ans[i][1];
            }
        }
        return s;
    }
};
