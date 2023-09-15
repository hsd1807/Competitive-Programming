#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int N=n;
    n/=10;
    n/=10;
    int abc=n*100+n*10+n;
    cout<<(N>abc?abc+111:abc);
    return 0;
}
