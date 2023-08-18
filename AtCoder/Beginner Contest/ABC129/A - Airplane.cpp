#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int p,q,r;
    cin>>p>>q>>r;
    cout<<p+q+r-(max(max(p,q),max(q,r)));
    return 0;
}
