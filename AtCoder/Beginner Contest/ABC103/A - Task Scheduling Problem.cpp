#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(max(a,b),max(b,c))-min(min(a,b),min(b,c));
    return 0;
}
