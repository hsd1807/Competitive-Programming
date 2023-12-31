class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> index(26,-1);
        int length=-1;
        for(int i=0;i<s.size();i++){
            if(index[s[i]-'a']!=-1)
                length=max(length,i-index[s[i]-'a']-1);
            else index[s[i]-'a']=i;
        }
        return length;
    }
};
