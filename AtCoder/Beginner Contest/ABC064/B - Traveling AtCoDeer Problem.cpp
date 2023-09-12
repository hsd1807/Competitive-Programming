#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,start=1001,finish=-1;
    cin>>n;
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<start) start = a[i];
        if(a[i]>finish) finish = a[i];
    }
    cout<<finish-start;
    return 0;
}
