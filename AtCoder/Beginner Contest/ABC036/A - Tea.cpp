#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    cout<<(b%a==0?b/a:b/a+1);
    return 0;
}
