#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,sum=0;
    cin>>n;
    int N=n;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    cout<<(N%sum==0?"Yes":"No");
    return 0;
}
