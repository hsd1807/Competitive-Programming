#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    cout<<(s[0]=='S'?"Cloudy":s[0]=='C'?"Rainy":"Sunny");
    return 0;
}
