#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,T,cost=INT_MAX;
    cin>>n>>T;
    while(n--){
        int c,t;
        cin>>c>>t;
        if(t<=T){
            if(c<cost){
                cost=c;
            }
        }
    }
    if(cost==INT_MAX) cout<<"TLE";
    else cout<<cost;
    return 0;
}
