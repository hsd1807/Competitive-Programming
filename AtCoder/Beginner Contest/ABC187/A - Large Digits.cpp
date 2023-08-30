#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,sa=0,sb=0;
    cin>>a>>b;
    
    while(a>0){
        sa+=a%10;
        sb+=b%10;
        a/=10;
        b/=10;
    }
    cout<<(sa>sb?sa:sb);
    return 0;
}
