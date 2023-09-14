#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a!=c) cout<<(a<c?"Takahashi":"Aoki");
    else cout<<(b<=d?"Takahashi":"Aoki");
    return 0;
}
