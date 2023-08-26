#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,r;
    cin>>n>>r;
    cout<<(n>9?r:r+100*(10-n));
    return 0;
}
