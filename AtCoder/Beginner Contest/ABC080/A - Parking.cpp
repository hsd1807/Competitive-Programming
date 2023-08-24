#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,a,b;
    cin>>n>>a>>b;
    cout<<(n*a>b?b:n*a);
    return 0;
}
