class Solution
{
    public:
    bool primecheck(int n){
        for(int i=2;i<n;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
    
    int minNumber(int arr[],int N)
    {
        int sum=0,ans=0;
        for(int i=0;i<N;i++)
            sum+=arr[i];
        if(sum==1) return 1;
        while(true){
            if(sum%2==0){
                sum++;
                ans++;
            }
            if(primecheck(sum))
                return ans;
            sum++,ans++;
        }
    }
};
