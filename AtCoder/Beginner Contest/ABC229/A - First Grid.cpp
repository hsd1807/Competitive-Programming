#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    cout<<(count(s1.begin(),s1.end(),'#')+count(s2.begin(),s2.end(),'#')>2?"Yes" : s1[0]!=s2[1] && s1[1]!=s2[0]?"Yes":"No");
    return 0;
}
