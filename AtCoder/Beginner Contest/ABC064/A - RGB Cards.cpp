#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int r,g,b;
    cin>>r>>g>>b;
    cout<<((r*100+g*10+b)%4==0?"YES":"NO");
    return 0;
}
