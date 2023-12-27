#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n; double y=0;
    cin>>n;
    while(n--){
        double x; string u;
        cin>>x>>u;
        if(u[0]=='B') x*=380000.0;
        y+=x;
    }
    cout<<y;
    return 0;
}
