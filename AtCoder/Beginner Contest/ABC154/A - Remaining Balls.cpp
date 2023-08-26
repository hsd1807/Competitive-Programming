#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s,t,u;
    int a,b;
    cin>>s>>t>>a>>b>>u;
    s==u?--a:--b;
    cout<<a<<' '<<b;
    return 0;
}
