class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest=INT_MIN;
        for(int i=0;i<accounts.size();i++){
            int wealth=0;
            for(int j=0;j<accounts[0].size();j++)
                wealth+=accounts[i][j];
            richest=max(wealth,richest);
        }
        return richest;
    }
};
