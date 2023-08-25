#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    cout<<(n%2==0?(float)(n/2)/n:(float)(n+1)/2/n);
    return 0;
}
