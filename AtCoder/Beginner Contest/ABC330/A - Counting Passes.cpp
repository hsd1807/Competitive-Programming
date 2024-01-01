#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,l,cnt=0;
    cin>>n>>l;
    while(n--){
        int a;
        cin>>a;
        if(a>=l)
          cnt++;
    }
    cout<<cnt;
    return 0;
}
