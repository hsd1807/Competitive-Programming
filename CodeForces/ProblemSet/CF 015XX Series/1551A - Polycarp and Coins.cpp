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
        int c1=n/3;
        if((n-c1)%2) c1++;
        cout<<c1<<' '<<(n-c1)/2<<'\n';
    }
    return 0;
}
