class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        vector<int> count(26,0),temp(26,0);
        for(int i=0;i<chars.size();i++)
            count[chars[i]-'a']++;
        for(int i=0;i<words.size();i++){
            int j;
            temp=count;
            for(j=0;j<words[i].size();j++)
                if(temp[words[i][j]-'a']==0) break;
                else temp[words[i][j]-'a']--;
            if(j==words[i].size()) ans+=words[i].size();
        }
        return ans;
    }
};
