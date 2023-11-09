class Solution {
public:
    int countAsterisks(string s) {
        int n=s.size();
        int ans=0;
        bool lock=false;

        for(int i=0;i<n;i++){
            if(!lock){
                if(s[i]=='*') ans++;
                else if(s[i]=='|') lock=true;
            }
            else if(s[i]=='|') lock=false;
        }
        
        return ans;
    }
};
