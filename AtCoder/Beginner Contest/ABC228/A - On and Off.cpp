#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int s,t,x;
    cin>>s>>t>>x;
    cout<<(s<t?x<t?"Yes":"No" :x>=s||x<t?"Yes":"No");
    return 0;
}
