#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s; int mind=0;
    cin>>s;
    for(int i=0;i<4;i++) 
        s[i]=='+'? mind++ : mind--;
    cout<<mind;
    return 0;
}
