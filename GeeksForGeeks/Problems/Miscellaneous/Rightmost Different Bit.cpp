//User function Template for C++
class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        int pos=0;
        while(m||n){
            pos++;
            bool bit1=m%2,bit2=n%2;
            if(bit1!=bit2)
                return pos;
            m/=2,n/=2;
        }
        return -1;
    }
};
