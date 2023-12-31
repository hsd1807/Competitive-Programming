class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            int first=0,second=0;
            while(first<words[i].size()&&second<s.size()){
                if(words[i][first]!=s[second]) break;
                first++,second++;
            }
            if(first==words[i].size()) cnt++;
        }
        return cnt;
    }
};
