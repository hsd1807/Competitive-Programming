class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int minimum=INT_MAX;
        vector<int> count(26,0);
        vector<int> counttarget(26,0);
        for(int i=0;i<s.size();i++)
            count[s[i]-'a']++;
        for(int i=0;i<target.size();i++)
            counttarget[target[i]-'a']++;
        for(int i=0;i<target.size();i++){
            if(count[target[i]-'a']/counttarget[target[i]-'a']<minimum){
            minimum=min(minimum,count[target[i]-'a']/counttarget[target[i]-'a']);
            }
        }
        return minimum;
    }
};
