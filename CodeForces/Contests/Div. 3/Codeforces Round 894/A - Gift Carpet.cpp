#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,ans=0;
        string s="vika";
        cin>>n>>m;
        string carpet[n];
        for(int i=0;i<n;i++)
                cin>>carpet[i];
        for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
            if(carpet[j][i]==s[ans]){
                    ans++;
                    break;
            }
        }
    }
        cout<<(ans>3?"Yes":"No")<<'\n';
    }
    return 0;
}
