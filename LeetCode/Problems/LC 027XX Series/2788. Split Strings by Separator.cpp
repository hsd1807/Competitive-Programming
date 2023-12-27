class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            string split;
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==separator){
                    if(split.size()) ans.push_back(split);
                    split="";
                }
                else split.push_back(words[i][j]);
            }
            if(split.size()) ans.push_back(split);
        }
        return ans;
    }
};
