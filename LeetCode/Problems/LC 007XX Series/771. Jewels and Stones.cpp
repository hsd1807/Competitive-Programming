class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0;
        vector<bool> Jewels(256,0);
        vector<char> Stones(256,0);
        for(int i=0;i<jewels.size();i++)
            Jewels[jewels[i]]=1;
        for(int i=0;i<stones.size();i++)
            Stones[stones[i]]++;
        for(int i='A';i<='z';i++){
            if(Jewels[i]) cnt+=Stones[i];
        }
        return cnt;
    }
};
