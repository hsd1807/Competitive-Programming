#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int x,y;
    cin>>x>>y;
    cout<<(min(x,y)+3>max(x,y)?"Yes":"No");
    return 0;
}
