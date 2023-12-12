class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string S,T;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(S.size()==0) continue; 
                else S.pop_back();}
            else S.push_back(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#') {if(T.size()==0) continue; 
            else T.pop_back();}
            else T.push_back(t[i]);
        }
        if(S==T) return true; else return false;
    }
};
