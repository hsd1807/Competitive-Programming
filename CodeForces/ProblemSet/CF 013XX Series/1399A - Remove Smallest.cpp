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
        bool possible=true;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]>1){
                possible=false;
                break;
            }
        }
        cout<<(possible?"YES":"NO")<<'\n';
    }
    return 0;
}
