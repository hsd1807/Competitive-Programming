#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int x[5];
    for(int i=0;i<5;i++) {
            cin>>x[i];
            if(x[i]==0) x[0]=i+1;
    }
    cout<<x[0];
    return 0;
}
