#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int y,m,d; char slash[2];
    cin>>y>>slash[0]>>m>>slash[1]>>d;
    cout<<(m<5&&d<31?"Heisei":"TBD");
    return 0;
}
