class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        vector<bool> count(10,0);
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2])
                count[num[i]-'0']=1;
        }
        int index;
        for(index=9;index>=0;index--){
            if(count[index]==1)
                break;
        }
        if(index!=-1) for(int i=0;i<3;i++) ans+=index+'0';
        return ans;
    }
};
