#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    cout<<s.substr(0,s.size()-2)<<(s[s.size()-1]<'3'?'-': s[s.size()-1]<'7'?' ':'+');
    return 0;
}
