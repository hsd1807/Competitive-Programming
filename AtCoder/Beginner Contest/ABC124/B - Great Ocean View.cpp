#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,ans=0;
    cin>>n;
    int maxheight=INT_MIN;
    while(n--){
        int h;
        cin>>h;
        if(h>=maxheight){
            maxheight=h;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
