#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        cout<<(n%10==9?n/10+1:n/10)<<'\n';
    }
    return 0;
}
