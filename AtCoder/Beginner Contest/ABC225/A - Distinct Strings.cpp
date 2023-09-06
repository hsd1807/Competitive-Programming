#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    cout<<(count(s.begin(),s.end(),s[0])==3?1: s[0]!=s[1]&&s[1]!=s[2]&&s[2]!=s[0]?6:3);
    return 0;
}
