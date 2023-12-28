#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<(a==b?c:a==c?b:a)<<'\n';
    }
    return 0;
}
