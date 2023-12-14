class Solution {
public:
    string customSortString(string order, string s) {
        int index=0;
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<order.size();i++){
            while(count[order[i]-'a']){
                s[index]=order[i];
                index++;
                count[order[i]-'a']--;
            }
        }
        for(int i=0;i<26;i++){
            while(count[i]){
                s[index]=i+'a';
                index++;
                count[i]--;
            }
        }
        return s;
    }
};
