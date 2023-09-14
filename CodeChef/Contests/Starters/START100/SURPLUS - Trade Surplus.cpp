#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int a[2],b[2];
        cin>>a[0]>>a[1]>>b[0]>>b[1];
        cout<<(a[0]-a[1]+b[0]-b[1]<0?"YES":"NO")<<'\n';
    }
    return 0;
}
