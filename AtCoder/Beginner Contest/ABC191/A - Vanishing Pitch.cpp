#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int v,t,s,d;
    cin>>v>>t>>s>>d;
    cout<<(d<v*t||d>v*s?"Yes":"No");
    return 0;
}
