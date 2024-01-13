#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;
    if(n1==n2) cout<<"Second";
    else cout<<(n2>n1?"Second":"First");
    return 0;
}
