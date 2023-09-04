#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    int ans=a+(c-a%c);
    if(a==b || a==c) cout<<(a%c==0?a:-1);
    else cout<<(ans<=b?ans:-1);
    return 0;
}
