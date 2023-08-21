#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int ans=0;
    if(s[1]==s[0]) ans++;
    if(s[2]==s[0]) ans++;
    cout<<(ans==2?"No":"Yes");
    return 0;
}
