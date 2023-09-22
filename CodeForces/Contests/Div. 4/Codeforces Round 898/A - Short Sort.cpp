#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        cout<<(s[0]=='a' || s[1]=='b' || s[2]=='c'?"YES":"NO")<<'\n';
    }
    return 0;
}
