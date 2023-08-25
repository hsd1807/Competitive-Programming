#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<(abs(a-c)<=d?"Yes":(abs(a-b)<=d && abs(b-c)<=d)?"Yes":"No");
    return 0;
}
