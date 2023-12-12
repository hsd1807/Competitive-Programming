class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++)
            count[s[i]-'a']++;
        for(int i=0;i<26;i++){
            if(count[i]!=0 && count[i]!=count[s[0]-'a'])
                return false;
        }
        return true;
    }
};
