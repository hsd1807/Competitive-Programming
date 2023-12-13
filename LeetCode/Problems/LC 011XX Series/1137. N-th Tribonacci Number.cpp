class Solution {
public:
    int tribonacci(int n) {
        int tn=(n==0?0:1),t0=0,t1=1,t2=1;
        for(int i=3;i<=n;i++){
            tn=t0+t1+t2;
            t0=t1;
            t1=t2;
            t2=tn;
        }
        return tn;
    }
};
