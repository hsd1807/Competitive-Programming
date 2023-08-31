#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,a,x,y;
    cin>>n>>a>>x>>y;
    cout<<(n>a? a*x+(n-a)*y: n*x);
    return 0;
}
