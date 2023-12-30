class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n=word1.size()<word2.size()?word1.size():word2.size();
        for(int i=0;i<n;i++)
            ans+=word1[i],ans+=word2[i];
        if(word1.size()>word2.size()) swap(word1,word2);
        for(int i=word1.size();i<word2.size();i++)
            ans+=word2[i];
        return ans;
    }
};
