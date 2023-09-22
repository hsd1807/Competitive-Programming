#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,flag=1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum1=0,sum2=0;
        for(int i=0;i<n-1;i++)
        {
            sum1=sum1+arr[i];
            sum2=0;
            for(int j=i+1;j<n;j++)
            {
                sum2=sum2+arr[j];
            }
            if((sum1%2==0&&sum2%2==0)||(sum1%2!=0&&sum2%2!=0))
            {
                cout<<"YES\n";
                flag=0;
                break;
            }
        }
        if(flag) cout<<"NO\n";
    }
    return 0;
}
