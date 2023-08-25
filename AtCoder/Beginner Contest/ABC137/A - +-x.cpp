#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    cout<<max(max(a+b,a-b),max(a*b,a-b));
    return 0;
}
