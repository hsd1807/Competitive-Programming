#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        vector<int> s(4);
        for(int i=0;i<4;i++){
            cin>>s[i];
        }
        int w1=s[0]>s[1]?s[0]:s[1];
        int w2=s[2]>s[3]?s[2]:s[3];
        sort(s.begin(),s.end());
        cout<<(w1+w2==s[2]+s[3]?"YES":"NO")<<'\n';
    }
    return 0;
}
