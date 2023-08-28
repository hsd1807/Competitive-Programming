#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int k,a,b;
    cin>>k>>a>>b;
    cout<<(b/k - a/k>=1 || a%k==0?"OK":"NG");
    return 0;
}
