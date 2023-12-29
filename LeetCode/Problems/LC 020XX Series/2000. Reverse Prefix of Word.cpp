class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                i++;
                reverse(word.begin(),word.begin()+i);
                break;
            }
        }
        return word;
    }
};
