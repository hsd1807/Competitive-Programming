#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    cout<<(a%3==0 || b%3==0 || (a+b)%3==0 ?"Possible":"Impossible");
    return 0;
}
