class Solution {
public:
    int minimumPushes(string word)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> letters(26, 0);
        for (int i = 0; i < word.size(); i++) {
            letters[word[i]-'a']++;
        }
        sort(letters.rbegin(), letters.rend());
        int pushes = 0, cnt = 0, add = 1;
        for (int i = 0; i<26 && letters[i] ; i++) {
            if (cnt == 8) cnt = 0, add++;
            pushes += letters[i] * add;
            cnt++;
        }
        return pushes;
    }
};
