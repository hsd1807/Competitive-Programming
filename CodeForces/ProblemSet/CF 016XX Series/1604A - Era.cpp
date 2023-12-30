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
        cin>>n;
        int currsize=1,operations=0;
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            if(a>currsize){
            operations+=a-currsize;
            currsize+=a-currsize;
            }
            currsize++;
        }
        cout<<operations<<'\n';
    }
    return 0;
}
