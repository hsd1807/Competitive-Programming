#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,sum=0,mx=0;
    cin>>n;
    vector<int> l(n);
    
    for(int i=0;i<n;i++){
        cin>>l[i];
        sum+=l[i];
        if(l[i]>mx) mx=l[i];
    }
    cout<<(mx<sum-mx?"Yes":"No");
    return 0;
}
