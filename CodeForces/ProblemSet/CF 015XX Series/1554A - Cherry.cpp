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
        vector<long long int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int product=INT_MIN;
        for(int i=0;i<n-1;i++){
                product=max(product,a[i]*a[i+1]);
        }
        cout<<product<<'\n';
    }
    return 0;
}
