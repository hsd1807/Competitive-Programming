class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        return 1;
        
        int ans=0,mul=1,rem;
        while(n)
        {
            rem=n&1;
            rem^=1;
            n/=2;
            ans+=mul*rem;
            mul*=2;
        }
        return ans;
    }
};
