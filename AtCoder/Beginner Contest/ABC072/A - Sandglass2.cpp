#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int x,t;
    cin>>x>>t;
    x=(t>x?t:x);
    cout<<x-t;
    return 0;
}
