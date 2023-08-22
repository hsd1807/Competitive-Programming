#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string a,b,c;
    cin>>a>>b>>c;
    cout<<(a[a.size()-1]==b[0] && b[b.size()-1]==c[0]?"YES":"NO");
    return 0;
}
