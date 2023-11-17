class Solution {
public:
    string addStrings(string num1, string num2, int n){
        string ans;
        int index1=num1.size()-1,index2=num2.size()-1;
        for(int i=1;i<=n;i++){
            ans+=num1[index1];
            index1--;
        }
        int carry=0;
        while(index1>=0){
            int result=(num1[index1]-'0')+(num2[index2]-'0')+carry;
            carry=result/10;
            ans+=result%10+'0';
            index1--,index2--;
        }
        while(index2>=0){
            int result = num2[index2]-'0'+carry;
            carry=result/10;
            ans+=result%10+'0';
            index2--;
        }
        if(carry) ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }

    string Multiply(string num1, string num2){
        string final_answer="0";
        int n=0;
        int index2=num2.size()-1;
        while(index2>=0){
            string ans;
            int index1=num1.size()-1;
            int carry=0,result;
            while(index1>=0){
                result=(num1[index1]-'0')*(num2[index2]-'0')+carry;
                carry=result/10;
                ans+=(result%10)+'0';
                index1--;
            }
            if(carry) ans+=carry+'0';
            reverse(ans.begin(),ans.end());
            final_answer=addStrings(final_answer,ans,n);
            index2--,n++;
        }
        
        reverse(final_answer.begin(),final_answer.end());
        while(final_answer.size()>1 && final_answer[final_answer.size()-1]=='0') final_answer.pop_back();
        reverse(final_answer.begin(),final_answer.end());
        return final_answer;
    }

    string multiply(string num1, string num2) {
        if(num1.size()>=num2.size())
            return Multiply(num1,num2);
        else
            return Multiply(num2,num1);
    }
};
