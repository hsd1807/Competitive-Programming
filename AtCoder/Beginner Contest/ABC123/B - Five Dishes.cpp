#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int ans=0,mini=INT_MAX,index=-1;
    vector<int> time(5);
    for(int i=0;i<5;i++){
        cin>>time[i];
        if(time[i]%10<mini&&time[i]%10){
        mini=time[i]%10;
        index=i;
        }
    }
    for(int i=0;i<5;i++){
        if(i==index) ans+=time[i];
        else if(time[i]%10) ans+=(time[i]+(10-time[i]%10));
        else ans+=time[i];
    }
    cout<<ans;
    return 0;
}
