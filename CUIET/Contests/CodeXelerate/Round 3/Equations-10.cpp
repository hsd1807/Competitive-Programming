#include<bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long int x,y;
    cin>>x>>y;
    int lhs=((x*x*x*x)+(4*y*y));
    int rhs=(4*x*x*y);
    if(lhs==rhs) cout<<"YES";
    else cout<<"NO";
    return 0;
}
