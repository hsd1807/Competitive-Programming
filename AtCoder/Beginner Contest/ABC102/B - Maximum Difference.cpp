#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,mx=1,mn=0;
    cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(i==0) mn=s[i];
        if(s[i]>mx) mx=s[i];
        if(s[i]<mn) mn=s[i];
    }
    cout<<mx-mn;
    return 0;
}
