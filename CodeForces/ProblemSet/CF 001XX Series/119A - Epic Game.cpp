#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,n;
    cin>>a>>b>>n;
    for(int i=1;n>=0;i++){
        if(i%2) n-=__gcd(n,a); else n-=__gcd(n,b);
        if(n<0){
            cout<<i%2;
            break;
        }
    }
    return 0;
}
