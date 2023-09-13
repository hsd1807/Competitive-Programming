#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n; 
    string s;
    cin>>n>>s;
    int x=0,maxx=0;
    for(int i=0;i<n;i++){
        if(s[i]=='I') x++;
        else if(s[i]=='D') x--;
        if(x>maxx) maxx=x;
    }
    cout<<maxx;
    return 0;
}
