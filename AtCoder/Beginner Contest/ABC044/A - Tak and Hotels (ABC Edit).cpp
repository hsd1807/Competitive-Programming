#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    cout<<(n<=k?n*x:(k*x)+y*(n-k));
    return 0;
}
