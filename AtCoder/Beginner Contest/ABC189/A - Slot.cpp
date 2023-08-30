#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    cout<<(count(s.begin(),s.end(),s[1])==3?"Won":"Lost");
    return 0;
}
