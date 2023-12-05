class Solution {
public:
    bool digitCount(string num) {
        vector<int> count(10,0);
        for(int i=0;i<num.size();i++)
            count[num[i]-'0']++;
        for(int i=0;i<num.size();i++){
            if(num[i]-'0'!=count[i])
                return false;
        }
        return true;
    }
};
