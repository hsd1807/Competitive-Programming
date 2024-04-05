class Solution {
public:
    char letter (char c) {
        if (c < 'a') {
            return c+'a'-'A';
        }
        else {
            return c-('a'-'A');
        }
    }
    string makeGood(string s) {
        string great;
        for (int i = 0; i < s.size(); i++) {
            if (great.empty()) {
                great.push_back(s[i]);
            }
            else {
                if (great.back() == letter(s[i])) {
                    great.pop_back();
                }
                else {
                    great.push_back(s[i]);
                }
            }
        }
        return great;
    }
};
