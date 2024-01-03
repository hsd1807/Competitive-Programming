class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0,prev=0;
        for(int i=0;i<bank.size();i++){
            int devices=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1')
                    devices++;
            }
            if(devices){
                ans+=prev*devices;
                prev=devices;
            }
        }
        return ans;
    }
};
