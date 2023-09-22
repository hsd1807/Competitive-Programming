#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n,k,cnt=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                    int it=1;
                    for(int j=i;j<n;j++){
                        if(it<=k){
                            s[j]='W';
                            it++;
                        }
                        else break;
                    }
                    cnt++;
        }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
