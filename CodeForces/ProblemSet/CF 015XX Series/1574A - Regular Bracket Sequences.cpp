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
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++) cout<<'(';
            for(int j=1;j<=i;j++) cout<<')';
            for(int j=1;j<=n-i;j++) cout<<"()";
            cout<<'\n';
        }
    }
    return 0;
}
