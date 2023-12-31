class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            int first=0,second=0;
            while(first<words[i].size()&&second<pref.size()){
                if(words[i][first]!=pref[second]) break;
                first++,second++;
            }
            if(second==pref.size()) cnt++;
        }
        return cnt;
    }
};
