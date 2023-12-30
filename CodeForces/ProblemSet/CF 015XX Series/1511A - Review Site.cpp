#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int s1=0;
        while(n--){
            int r;
            cin>>r;
            if(r==1||r==3) s1++;
        }
        cout<<s1<<'\n';
    }
    return 0;
}
