#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin>>k;
    vector<int> r(k);
    int ans=0;
    for(int i=0;i<k;i++){
        cin>>r[i];
        ans=max(r[i],ans);
    }
    cout<<(ans<26?0:ans-25);
    return 0;
}
