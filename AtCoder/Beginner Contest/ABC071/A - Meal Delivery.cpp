#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int x,a,b;
    cin>>x>>a>>b;
    cout<<(abs(x-a)<abs(x-b)?"A":"B");
    return 0;
}
