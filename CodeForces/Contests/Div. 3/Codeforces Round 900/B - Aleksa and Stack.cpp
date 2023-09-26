#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> ans(n);
        ans[0]=6;
        ans[1]=8;
        int num=12;
        cout<<"6 8 ";
        for(int i=2;i<n;i++){
            while(true){
                if(3*num%(ans[i-1]+ans[i-2])!=0){
                    ans[i]=num;
                    break;
                }
                else num++;
            }
            num++;
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
