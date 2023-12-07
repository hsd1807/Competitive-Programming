class Solution {
public:
    string truncateSentence(string s, int k) {
        int index=0;
        while(k && index<s.size()){
            if(s[index]==' ') k--;
            index++;
        }
        if(index==s.size()) return s;
        while(s.size()>=index) s.pop_back();
        return s;
    }
};
