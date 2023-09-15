#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,k,ans=0;
    cin>>a>>b>>k;
    if(a>b) swap(a,b);
    ans=__gcd(a,b);
    k--;
    while(k){
        --ans;
        if(a%ans==0 && b%ans==0) k--;
    }
    cout<<ans;
    return 0;
}
