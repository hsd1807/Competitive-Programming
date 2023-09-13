#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int a=s.find('A');
    int z=s.size()-1;
    for(z;s[z]!='Z';z--);
    cout<<z-a+1;
    return 0;
}
