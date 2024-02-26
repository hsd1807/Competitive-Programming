class Solution {
public:
    void permute(string& str, int index, vector<string>& ans, string& temp) {
        if (index == str.size()) {
            ans.push_back(temp);
            return;
        }
        if(str[index] <= '9') {
            temp.push_back(str[index]);
            permute(str, index+1, ans, temp);
            temp.pop_back();
        }
        else {
            temp.push_back(str[index]);
            permute(str, index+1, ans, temp);
            temp.pop_back();
            int convert = 'a' - 'A';
            if (str[index] >= 'a') convert = -convert;
            temp.push_back(str[index] + convert);
            permute(str, index+1, ans, temp);
            temp.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<string> ans;
        string temp;
        permute(s, 0, ans, temp);
        return ans;
    }
};
