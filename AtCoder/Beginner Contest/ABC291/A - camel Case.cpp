#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
        if(s[i]<97) {
            cout<<i+1;
            return 0;
    }
    return 0;
}
