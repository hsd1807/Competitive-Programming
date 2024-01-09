#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<string> flag(n);
    for(int i=0;i<n;i++){
        cin>>flag[i];
    }
    bool ok=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            if(flag[i][j]!=flag[i][j+1]){
                ok=false;
                break;
            }
        }
        if(ok&&i){
            if(flag[i][0]==flag[i-1][0]){
                ok=false;
                break;
            }
        }
        if(!ok) break;
    }
    cout<<(ok?"YES":"NO");
    return 0;
}
