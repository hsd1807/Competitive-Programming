#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<(a+b>c+d?"Left":a+b==c+d?"Balanced":"Right");
    return 0;
}
