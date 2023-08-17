#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a[3];
    for(int i=0;i<3;i++) cin>>a[i];
    for(int i=0;i<2;i++) for(int j=i+1;j<3;j++) if(a[i]<a[j]) swap(a[i],a[j]);
    cout<<a[0]*10+a[1]+a[2];
    return 0;
}
