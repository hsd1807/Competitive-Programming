#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        int a,b,c;
        a=b=c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') a++;
            else if(s[i]=='B') b++;
            else c++;
        }
        cout<<(a+c==b?"YES":"NO")<<'\n';
    }
    return 0;
}
