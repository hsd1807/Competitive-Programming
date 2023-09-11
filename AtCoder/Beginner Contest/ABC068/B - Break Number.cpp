#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int i=1,n;
    cin>>n;
    while(true){
        if(i*2>n) break;
        i*=2;
    }
    cout<<i;
    return 0;
}
