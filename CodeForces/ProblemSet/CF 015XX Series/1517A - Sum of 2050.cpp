#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        long long n,ans=0;
        cin>>n;
        if(n%2050){
            cout<<-1<<'\n';
            continue;
        }
        n/=2050;
        while(n){
           ans+=n%10;
           n/=10;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
