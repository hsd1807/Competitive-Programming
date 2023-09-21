#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string o,e;
    cin>>o>>e;
    int p=o.size()+e.size();
    for(int i=1;i<=p;i++){
        if(i%2==0) cout<<e[i/2-1];
        else cout<<o[i/2];
    }
    return 0;
}
