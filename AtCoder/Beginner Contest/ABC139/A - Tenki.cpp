#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s,t;
    cin>>s>>t;
    int ans=0;
    for(int i=0; i<3; i++)
    {
        if(s[i]==t[i]) ans++;
    }
    cout<<ans;
    return 0;
}
