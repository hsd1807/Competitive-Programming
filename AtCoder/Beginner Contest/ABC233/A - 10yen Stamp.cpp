#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int x,y;
    cin>>x>>y;
    cout<<(x>=y?0: (y-x)%10==0?(y-x)/10:(y-x)/10+1);
    return 0;
}
