#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    for(int i=1; i<4; i++)
        if(s[i]==s[i-1])
        {
            cout<<"Bad";
            return 0;
        }
    cout<<"Good";
    return 0;
}
