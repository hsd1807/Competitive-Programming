#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=n-1;i>=0;i--) cout<<s[i]<<'\n';
    return 0;
}
