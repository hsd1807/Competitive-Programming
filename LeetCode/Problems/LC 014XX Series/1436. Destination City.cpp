class Solution {
public:
    void lpsfind(vector<int> &lps,string s){
        int prefix=0,suffix=1;
        while(suffix<s.size()){
            if(s[prefix]==s[suffix]){
                lps[suffix]=prefix+1;
                prefix++,suffix++;
            }
            else{
                if(prefix==0) suffix++;
                else prefix=lps[prefix-1];
            }
        }
    }
    bool KMP_MATCH(string haystack, string needle){
        vector<int> lps(needle.size(),0);
        lpsfind(lps,needle);
        int first=0,second=0;
        while(first<haystack.size()&&second<needle.size()){
            if(haystack[first]==needle[second])
                first++,second++;
            else
                if(second==0) first++;
                else second=lps[second-1];
        }
        if(second==needle.size()) return 1;
        return 0;
    }
    string destCity(vector<vector<string>>& paths) {
        string haystack;
        for(int i=0;i<paths.size();i++)
            haystack+=paths[i][0];
        for(int i=0;i<paths.size();i++){
            bool found = KMP_MATCH(haystack,paths[i][1]);
            if(!found){
                return paths[i][1];
            }
        }
        return paths[0][1];
    }
};
