class Solution {
public:
    char shift(char c, char x){
        x=c+x-'0';
        return x;
    }
    string replaceDigits(string s) {
        for(int i=1;i<s.size();i+=2){
            s[i]=shift(s[i-1],s[i]);
        }
        return s;
    }
};
