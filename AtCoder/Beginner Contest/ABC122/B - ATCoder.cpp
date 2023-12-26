#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int acgt=0,maxacgt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'||s[i]=='C'||s[i]=='G'||s[i]=='T') acgt++;
        else acgt=0;
        maxacgt=max(acgt,maxacgt);
    }
    cout<<maxacgt;
    return 0;
}
