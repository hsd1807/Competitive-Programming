//User function Template for C++
class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        int ans=0;
        while(n){
            ans++;
            if(n%2==1){
                return ans;
            }
            n/=2;
        }
        return 0;
    }
};
