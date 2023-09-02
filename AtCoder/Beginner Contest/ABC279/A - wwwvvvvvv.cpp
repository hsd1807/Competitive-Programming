#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    cout<<count(s.begin(),s.end(),'v')+count(s.begin(),s.end(),'w')*2;
    return 0;
}
