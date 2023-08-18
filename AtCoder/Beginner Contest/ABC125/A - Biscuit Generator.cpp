#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,t,biscuits=0;
    cin>>a>>b>>t;
    if(a>t) cout<<0;
    else
    {
        for(int i=a;i<t+0.5;i=i+a)
            biscuits=biscuits+b;
        
        cout<<biscuits;
    }
    return 0;
}
