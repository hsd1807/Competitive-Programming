class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int i,first=0;
        bool found=true;
        for(i=0;i<words.size();i++){
            int second=0;
            while(second<words[i].size()&&first<s.size()){
                if(s[first]!=words[i][second]) break;
                first++,second++;
            }
            if(second!=words[i].size()){found=false;break;}
            if(first==s.size()) break;
        }
        if(first==s.size()&&found) return true;
        return false;
    }
};
