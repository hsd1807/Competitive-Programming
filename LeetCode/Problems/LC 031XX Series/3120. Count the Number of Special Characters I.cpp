class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> alphabets(256,0);
        for (int i = 0; i < word.size(); i++) {
            alphabets[word[i]] = 1;
        }
        int cnt = 0;
        for (int i = 'a'; i <= 'z'; i++) {
            cnt += alphabets[i] && alphabets[i - ('a'-'A')];
        }
        return cnt;
    }
};
