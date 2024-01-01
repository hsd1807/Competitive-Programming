#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,hours=0,burnt=0;
    cin>>a>>b;
    while(a){
        hours+=a;
        burnt+=a%b;
        a/=b;
        if(burnt>=b) {a+=burnt/b; burnt=burnt%b;}
    } 
    cout<<hours+a/b;
    return 0;
}
