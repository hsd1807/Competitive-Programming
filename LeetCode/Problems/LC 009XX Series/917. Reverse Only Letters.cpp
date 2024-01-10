class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start=0,end=s.size()-1;
        while(start<end){
            if((s[start]>='A'&&s[start]<='Z')||(s[start]>='a'&&s[start]<='z')){
                if((s[end]>='A'&&s[end]<='Z')||(s[end]>='a'&&s[end]<='z')){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
                else end--;
            }
            else start++;
        }
        return s;
    }
};
