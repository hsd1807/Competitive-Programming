#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    if((a+b)%2==0) cout<<(a+b)/2;
    else cout<<"IMPOSSIBLE";
    return 0;
}
