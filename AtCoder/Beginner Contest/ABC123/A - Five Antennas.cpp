#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a[5],k;
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>k;
    for(int i=0;i<4;i++) for(int j=i+1;j<5;j++) if(a[j]-a[i]>k) {cout<<":(";return 0;}
    cout<<"Yay!";
    return 0;
}
