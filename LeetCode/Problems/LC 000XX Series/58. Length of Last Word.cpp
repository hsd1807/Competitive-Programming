class Solution {
public:
    int lengthOfLastWord(string s) {
        while (s.back() == ' ') {
            s.pop_back();
        }
        int index = s.size();
        int cnt = 0;
        while (index && s[--index] != ' ') {
            cnt++;
        }
        return cnt;
    }
};
