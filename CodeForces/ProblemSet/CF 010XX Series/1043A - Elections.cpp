#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,mx=INT_MIN,sum=0,votes=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        votes+=mx-a[i];
    }
    cout<<(votes>sum?mx:(mx+(sum-votes)/n)+1)<<'\n';
    return 0;
}
