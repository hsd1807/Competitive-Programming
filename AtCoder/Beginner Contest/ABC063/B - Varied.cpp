#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    bool different = true;
    for(int i=0;i<s.size();i++)
        for(int j=i+1;j<s.size();j++)
        if(s[i]==s[j]){
            different = false;
            break;
        }
    cout<<(different?"yes":"no");
    return 0;
}
