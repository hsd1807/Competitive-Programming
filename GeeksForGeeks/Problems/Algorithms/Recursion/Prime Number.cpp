class Solution{
public:
    int isPrime(int num, int n=2){
        if(num<2) return 0;
        if(n*n>num) return 1;
        if(num%n==0) return 0;
        return isPrime(num,n+1);
    }
};
