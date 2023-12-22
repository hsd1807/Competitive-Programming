#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s[1]=='+') x++;
        else x--;
    }
    cout<<x;
    return 0;
}
