class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.size()!=str2.size()) return false;
        
        int n=str1.size();
        vector<char>map(26,'0');
        for(int i=0;i<n;i++){
            int pos=str1[i]-'a';
            if(map[pos]=='0'){
                for(int j=0;j<26;j++)
                if(map[j]==str2[i]) return false;
                
                map[pos]=str2[i];
            }
            else if(map[pos]!=str2[i]) return false;
        }
        return true;
    }
};
