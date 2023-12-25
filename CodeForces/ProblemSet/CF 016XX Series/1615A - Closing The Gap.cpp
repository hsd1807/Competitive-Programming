#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> a(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        cout<<(sum%n==0?"0":"1")<<'\n';
    }
    return 0;
}
