#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,a,b,ans=0;
    cin>>n>>a>>b;
    vector<int> choices(n);
    for(int i=0;i<n;i++){
        cin>>choices[i];
        if(choices[i]==a+b) ans=i;
    }
    cout<<++ans;
    return 0;
}
