#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,k;
    cin>>n>>k;
    k=240-k;
    for(int i=0;i<=n+1;i++){
        k-=i*5;
        if(k<0||i==n+1){
            cout<<i-1<<'\n';
            break;
        }
    }
    return 0;
}
