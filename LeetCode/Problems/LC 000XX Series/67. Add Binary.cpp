class Solution {
public:
    string BinaryAdd(string a,string b){
        string ans;
        bool carry=0;
        int index1=a.size()-1,index2=b.size()-1;
        while(index2>=0){
            int result=(a[index1]-'0')+(b[index2]-'0')+carry;
            if(result>1){
                carry=1;
                ans+=(result-2)+'0';
            }
            else{
                ans+=result+'0';
                carry=0;
            }    
            index1--,index2--;    
        }

        while(index1>=0){
            int result=(a[index1]-'0')+carry;
            if(result>1){
                carry=1;
                ans+=(result-2)+'0';
            }
            else{
                ans+=result+'0';
                carry=0;
            }
            index1--;
        }
        
        if(carry) ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }

    string addBinary(string a, string b) {
        if(a.size()>b.size()) return BinaryAdd(a,b);
        else return BinaryAdd(b,a);
    }
};
