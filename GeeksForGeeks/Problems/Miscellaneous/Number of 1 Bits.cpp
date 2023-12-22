class Solution {
  public:
    int setBits(int N) {
        int setbits=0;
        while(N){
            setbits+=N&1;
            N/=2;
        }
        return setbits;
    }
};
