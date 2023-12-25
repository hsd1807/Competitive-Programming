#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int l[3];
        cin>>l[0]>>l[1]>>l[2];
        bool eq=false;
        sort(l,l+3);
        if(l[1]==l[0] || l[1]==l[2]){
            if(l[1]==l[2])
                swap(l[2],l[0]);
            if(l[2]%2==0)
                cout<<"YES"<<'\n';
            else
                cout<<"NO"<<'\n';
            continue;
        }
        if(l[0]+l[1]==l[2])
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}
