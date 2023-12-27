class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int k=0,cnt=0;
        if(ruleKey[0]=='c') k++;
        else if(ruleKey[0]=='n') k+=2;
        for(int i=0;i<items.size();i++){
            if(items[i][k]==ruleValue)
                cnt++;
        }
        return cnt;
    }
};
