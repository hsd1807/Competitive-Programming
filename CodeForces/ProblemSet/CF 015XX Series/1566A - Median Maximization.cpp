#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n,s;
        cin>>n>>s;
        if(n==1) cout<<s<<'\n';
        else if(n==2) cout<<s/2<<'\n';
        else{
            if(n%2) n++;
            else n+=2;
            n/=2;
            cout<<s/n<<'\n';
        }
    }
    return 0;
}
