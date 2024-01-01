class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> cnt(26,0);
        for(int i=0;i<s.size();i++){
            if(cnt[s[i]-'a']==1){
                return s[i];
            }
            cnt[s[i]-'a']=1;
        }
        return s[0];
    }
};
