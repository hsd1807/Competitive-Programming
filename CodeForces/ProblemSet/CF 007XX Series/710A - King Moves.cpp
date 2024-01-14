#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    char c,d;
    cin>>c>>d;
    if((c=='a'||c=='h')&&(d=='1'||d=='8')) cout<<3<<'\n';
    else if((c=='a'||c=='h')||(d=='1'||d=='8')) cout<<5<<'\n';
    else cout<<8<<'\n';
    return 0;
}
