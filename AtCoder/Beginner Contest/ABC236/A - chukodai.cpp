#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;int a,b;
    cin>>s>>a>>b;
    swap(s[--a],s[--b]);
    cout<<s;
    return 0;
}
