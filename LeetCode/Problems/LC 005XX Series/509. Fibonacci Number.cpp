class Solution {
public:
    int fib(int n) {
        int last=0,prev=1,current;
        if(n<2) return n;
        for(int i=2;i<=n;i++){
            current=last+prev;
            last=prev;
            prev=current;
        }
        return current;
    }
};
