class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int words=0; bool ok=true;
        vector<bool> keyboard(26,0);
        for(int i=0;i<brokenLetters.size();i++)
            keyboard[brokenLetters[i]-'a']=1;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                if(ok) words++;
                ok=true;
            }
            else if(keyboard[text[i]-'a']) ok=false;
        }
        if(ok) words++;
        return words;
    }
};
