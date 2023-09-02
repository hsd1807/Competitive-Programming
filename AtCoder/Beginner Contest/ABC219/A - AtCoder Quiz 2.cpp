#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int x;
    cin>>x;
    if(x>=90) cout<<"expert";
    else cout<<(x<40?40-x :x<70?70-x:90-x);
    return 0;
}
