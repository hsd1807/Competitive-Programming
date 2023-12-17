class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercase=0;
        for(int i=0;i<word.size();i++){
            if(word[i]<'a') uppercase++;
        }
        if(uppercase==word.size() || uppercase==0 || (uppercase==1&&word[0]<97))
            return true;
        else
            return false;
    }
};
