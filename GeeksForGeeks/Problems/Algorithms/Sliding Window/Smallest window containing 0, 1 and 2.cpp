class Solution {
  public:
    int smallestSubstring(string S) {
        vector<int> window(3,0);
        int start=0,end=0,len=-1;
        while(end<S.size()){
            if(S[end]=='0'||S[end]=='1'||S[end]=='2')
                window[S[end]-'0']++;
            while(window[0]&&window[1]&&window[2]){
                if(len==-1) len=INT_MAX;
                len=min(len,end-start+1);
                if(S[start]=='0'||S[start]=='1'||S[start]=='2'){
                window[S[start]-'0']--;
            }
            start++;
            }
            end++;
        }
        return len;
    }
};
