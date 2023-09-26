#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(count(a.begin(),a.end(),k)==0) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
