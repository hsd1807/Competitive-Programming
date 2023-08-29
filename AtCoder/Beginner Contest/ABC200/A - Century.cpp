#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    cout<<(n%100==0 ? n/100 : n/100+1);
    return 0;
}
