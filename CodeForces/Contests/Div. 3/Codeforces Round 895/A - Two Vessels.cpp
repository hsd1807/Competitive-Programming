#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int a,b,c,ans=0;
        cin>>a>>b>>c;
        if(a==b){
            cout<<0<<'\n';
            continue;
        }
        if(a>b) swap(a,b);
        while(b>a){
            b -= c;
            a += c;
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
