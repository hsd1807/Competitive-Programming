#include<bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b) {cout<<"YES";return 0;}
    else if(a>b){cout<<"NO";return 0;}
  
    if(c>d) swap(c,d);
    int h1=__gcd(a,b);
    int h2=__gcd(c,d);
    if(h1%h2==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
