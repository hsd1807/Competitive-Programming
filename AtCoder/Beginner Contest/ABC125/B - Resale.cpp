#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,c,ans=0;
    cin>>n;
    vector<int> gems(n);
    for(int i=0;i<n;i++)
        cin>>gems[i];
    for(int i=0;i<n;i++){
      cin>>c;
      if(gems[i]-c>0) ans+=gems[i]-c;
    }
    cout<<ans;
    return 0;
}
