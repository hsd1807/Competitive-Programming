#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int l,r,m;
        cin>>l>>r>>m;
        cout<<(m%l==0?m/l+m/r:m/l+m/r+1)<<'\n';
    }
    return 0;
}
