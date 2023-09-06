#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,k,a;
    cin>>n>>k>>a;
    if(k<n-a+1)
    {
        cout<<k+a-1;
        return 0;
    }
    else k -= n-a+1;
    while(k>n) k -= n;
    cout<<k;
    return 0;
}
