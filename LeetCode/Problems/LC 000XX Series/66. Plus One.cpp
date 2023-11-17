class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1,index=digits.size()-1;
        while(index>=0){
            int result=digits[index]+carry;
            carry=result/10;
            digits[index]=result%10;
            index--;
        }
        if(carry) {
            reverse(digits.begin(),digits.end());
            digits.push_back(1);
            reverse(digits.begin(),digits.end());
        }
        return digits;
    }
};
