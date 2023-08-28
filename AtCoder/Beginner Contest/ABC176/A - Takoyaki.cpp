#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,x,t;
    cin>>n>>x>>t;
    cout<<(n%x==0?(n/x)*t:((n/x)+1)*t);
    return 0;
}
