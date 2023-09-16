#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,cb=1,ans=0;
    cin>>n;
    vector<int> buttons(n+1);
    vector<int> v(n);
    buttons[0]=0;
    for(int i=1;i<=n;i++){
        cin>>buttons[i];
        v[i]=0;
    }
    while(cb!=2){
        if(v[buttons[cb]]==1){
            cout<<-1;
            return 0;
        }
        cb=buttons[cb];
        v[cb]++;
        ans++;
    }
    cout<<ans;
    return 0;
}
