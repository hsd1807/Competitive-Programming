#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    bool p=true;
    int t;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        t=count(arr,arr+n,arr[i]);
        if(t%2!=0) {p=false;t=arr[i];break;}
    }
    if(p) cout<<0;
    else cout<<t;
    return 0;
}
