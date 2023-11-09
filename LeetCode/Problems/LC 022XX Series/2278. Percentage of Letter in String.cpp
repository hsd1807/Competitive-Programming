class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.size();
        int alphabet=0;
        for(int i=0;i<n;i++)
            if(s[i]==letter)
                alphabet++;

        int ans=(alphabet*100)/s.size();
        return ans;
    }
};
