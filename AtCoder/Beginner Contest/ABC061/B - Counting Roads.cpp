#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    int roads[m*2];
    for(int i=0;i<m*2-1;i+=2){
        cin>>roads[i]>>roads[i+1];
    }
    
    for(int i=1;i<=n;i++){
        cout<<count(roads,roads+m*2,i)<<'\n';
    }
    return 0;
}
