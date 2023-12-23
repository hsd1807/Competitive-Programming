#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        if(n-(k-1)*2<1){
            cout<<-1<<'\n';
            continue;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j && i%2==0 && k>0){
                    cout<<"R";
                    k--;
                }
                else
                    cout<<".";
            }
            cout<<'\n';
        }
        cout<<'\n';
    }
    return 0;
}
