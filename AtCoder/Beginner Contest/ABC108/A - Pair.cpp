#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int k,ans=0;
    cin>>k;
    for(int i=1;i<=k;i++)
        for(int j=i+1;j<=k;j=j+2)
        ans++;
    cout<<ans;
    return 0;
}
