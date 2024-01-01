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
        bool found=false;
        for(int i=0;i*2021<=n;i++){
            if((n-i)%2020==0){
                found=true;
                break;
            }
        }
        cout<<(found?"YES":"NO")<<'\n';
    }
    return 0;
}
