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
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0) a[i]=-a[i];
        }
        sort(a.begin(),a.end());
        int first=0,second=0,uni=0;
        while(second<n){
            if(a[first]!=a[second]){
                if(second-first>1 && a[first]!=0) uni+=2;
                else uni++;
                first=second;
            }
            second++;
        }
        if(second-first>1 && a[first]!=0) uni+=2;
        else uni++;
        cout<<uni<<'\n';
    }
    return 0;
}
