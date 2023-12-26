#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n,l;
        cin>>n>>l;
        vector<string> x(n);
        for(int i=0;i<n;i++){
            int xi;
            cin>>xi;
            while(xi){
                char c=xi%2+'0';
                x[i].push_back(c);
                xi/=2;
            }
            while (x[i].size()!=l)
                x[i].push_back('0');
        }
        string ans;
        for(int i=0;i<l;i++){
            int one=0;
            for(int j=0;j<n;j++){
                if(x[j][i]=='1') one++;
            }
            if(one>n/2) ans.push_back('1');
            else ans.push_back('0');
        }
        int initial=0,mul=1;
        for(int i=0;i<l;i++){
            initial+=mul*(ans[i]-'0');
            mul*=2;
        }
        cout<<initial<<'\n';
    }
    return 0;
}
