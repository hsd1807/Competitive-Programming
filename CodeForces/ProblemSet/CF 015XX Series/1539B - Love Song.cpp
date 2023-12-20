#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,q;
    cin>>n>>q;
    string song;
    cin>>song;
    vector<int> prefixsum(n,0);
    prefixsum[0]=song[0]-'a'+1;
    for(int i=1;i<n;i++){
        prefixsum[i]=prefixsum[i-1]+song[i]-'a'+1;
    }
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<prefixsum[r-1]-prefixsum[l-1]+song[l-1]-'a'+1<<'\n';
    }
    return 0;
}
