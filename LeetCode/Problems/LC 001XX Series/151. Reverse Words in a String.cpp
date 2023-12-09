class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=0;
        while(s[s.size()-1]==' ')
            s.pop_back();
        reverse(s.begin(),s.end());
        while(s[s.size()-1]==' ')
            s.pop_back();
        for(int i=0;i<s.size();i++){
            while(s[i]==' '&&s[i+1]==' ')
                s.erase(s.begin()+i);
            if(s[i]==' '){
                reverse(s.begin()+start,s.begin()+end);
                start=i+1;
            }
            end++;
        }
        reverse(s.begin()+start,s.end());
        return s;
    }
};
