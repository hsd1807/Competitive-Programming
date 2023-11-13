class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
     vector<int> alphabet(26,0);
      
     for(int i=0;i<S.size();i++)
     alphabet[S[i]-'a']++;
      
     for(int i=0;i<S.size();i++)
        if(alphabet[S[i]-'a']==1)
            return S[i];
      
    return '$';    
    }
};
