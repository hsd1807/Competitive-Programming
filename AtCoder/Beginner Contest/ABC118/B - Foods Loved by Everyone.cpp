#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m,cnt=0;
    cin>>n>>m;
    vector<int> dishes(m,0);
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        for(int i=0;i<k;i++){
            int a;
            cin>>a;
            dishes[a-1]++;
        }
    }
    for(int i=0;i<m;i++){
        if(dishes[i]==n)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
