#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s,t;
    cin>>s>>t;
    cout<<(s==t.substr(0,s.size()) && s.size()==t.size()-1?"Yes":"No");
    return 0;
}
