#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int c1=1,c2=0;
    char s2,s1=s[0];
    for(int i=1;i<3;i++)
        if (s[i]!=s1)
    {
        s2=s[i];
        break;
    }
    for(int i=1;i<4;i++)
        if(s[i]==s1) c1++;
        else if(s[i]==s2) c2++;
    cout<<(c1==2 && c2==2?"Yes":"No");
    return 0;
}
