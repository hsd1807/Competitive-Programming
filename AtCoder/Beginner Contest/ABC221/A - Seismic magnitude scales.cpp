#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,ans=1;
    cin>>a>>b;
    while(a-->b) ans *= 32;
    cout<<ans;
    return 0;
}
