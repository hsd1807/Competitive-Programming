class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int index=num.size()-1,carry=k;
        while(index>=0){
            int result=num[index]+carry;
            carry=result/10;
            num[index]=result%10;
            index--;
        }
        reverse(num.begin(),num.end());
        while(carry){
            num.push_back(carry%10); carry/=10;
        }
        reverse(num.begin(),num.end());
        return num;
    }
};
