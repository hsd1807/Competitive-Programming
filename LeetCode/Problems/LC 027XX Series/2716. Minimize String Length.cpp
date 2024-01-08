class Solution {
public:
    int minimizedStringLength(string s) {
        vector<bool> alphabet(26,0); int ans=0;
        for(int i=0;i<s.size();i++){
            if(!alphabet[s[i]-'a']){
                alphabet[s[i]-'a']=1;
                ans++;
            }
        }
        return ans;
    }
};
