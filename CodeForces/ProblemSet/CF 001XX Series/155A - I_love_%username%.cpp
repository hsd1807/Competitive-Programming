#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,ans=0;
    cin>>n;
    int first,best,worst;
    cin>>first;
    best=worst=first;
    n--;
    while(n--){
        cin>>first;
        if(first>best){
            best=first;
            ans++;
        }
        if(first<worst){
            worst=first;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
