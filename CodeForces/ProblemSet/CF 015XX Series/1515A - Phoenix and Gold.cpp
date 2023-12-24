#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n,x,sum=0;
        cin>>n>>x;
        vector<int> w(n);
        for(int i=0;i<n;i++){
            cin>>w[i];
            sum+=w[i];
        }
        if(sum==x){
            cout<<"NO"<<'\n';
            continue;
        }
        cout<<"YES"<<'\n';
        sum=0;
        for(int i=0;i<n-1;i++){
            if(sum+w[i]==x)
                swap(w[i],w[i+1]);
            cout<<w[i]<<' ';
            sum+=w[i];
        }
        cout<<w[n-1]<<'\n';
    }
    return 0;
}
