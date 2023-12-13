class Solution {
public:
    int climbStairs(int n) {
        int curr=1,prev=1,last=1;
        for(int i=2;i<=n;i++)
        {
            curr=prev+last;
            last=prev;
            prev=curr;
        }
        return curr;
    }
};
