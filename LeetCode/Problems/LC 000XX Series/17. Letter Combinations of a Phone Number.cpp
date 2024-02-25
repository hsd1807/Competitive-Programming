class Solution {
public:
    vector<string> keypad = {" ", "", "abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void combinations(string& digits, int index, vector<string>& ans, string& temp) {
        if (index == digits.size()) {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < keypad[digits[index]-'0'].size(); i++) {
            temp.push_back(keypad[digits[index]-'0'][i]);
            combinations(digits, index+1, ans, temp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string temp;
        if (digits.size()) combinations(digits, 0, ans, temp);
        return ans;
    }
};
