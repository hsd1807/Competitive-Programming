#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m,c,cnt=0;
    cin>>n>>m>>c;
    vector<int> b(m);
    for(int i=0;i<m;i++)
        cin>>b[i];
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            a[i][j]*=b[j];
            sum+=a[i][j];
        }
        if(sum>-c) cnt++;
    }
    cout<<cnt;
    return 0;
}
