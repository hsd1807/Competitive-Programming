class Solution {
public:
    bool isPalindrome(string s) {
        int start=0,end=s.size()-1;
        while(start<end){
            if((s[start]>='0'&&s[start]<='9')||(s[start]>='A'&&s[start]<='Z')||(s[start]>='a'&&s[start]<='z')){
                if((s[end]>='0'&&s[end]<='9')||(s[end]>='A'&&s[end]<='Z')||(s[end]>='a'&&s[end]<='z')){
                    if(s[start]>='A'&&s[start]<='Z') s[start]=s[start]-'A'+'a';
                    if(s[end]>='A'&&s[end]<='Z') s[end]=s[end]-'A'+'a';
                    if(s[start]!=s[end]) return false;
                    start++,end--;
                }
                else
                    end--;
            }
            else
                start++;
        }
        return true;
    }
};
