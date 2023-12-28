#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        long long sum=0;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        bool found = false;
        for(long long i=1;i<=1e18;i++){
            if(i*i==sum){
                found=true;
                break;
            }
            if(i*i>sum) break;
        }
        cout<<(found?"YES":"NO")<<'\n';
    }
    return 0;
}
