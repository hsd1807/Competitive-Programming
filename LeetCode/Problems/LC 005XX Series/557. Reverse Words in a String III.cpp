class Solution {
public:
    void reverse(string &s,int start,int end){
        while(start<end){
            swap(s[start],s[end]);
            start++,end--;
        }
    }
    string reverseWords(string s) {
        int start=0;
        for(int i=0;i<=s.size();i++)
            if(s[i]==' ' || s[i]=='\0'){
                reverse(s,start,i-1);
                start=i+1;
            }
        return s;
    }
};
