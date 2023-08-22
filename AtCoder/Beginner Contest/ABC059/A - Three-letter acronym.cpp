#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string a,b,c;
    cin>>a>>b>>c;
    a[0]-=32;
    b[0]-=32;
    c[0]-=32;
    cout<<a[0]<<b[0]<<c[0];
    return 0;
}
