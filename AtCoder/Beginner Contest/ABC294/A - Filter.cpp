#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n ;i++){
        cin>>arr[i];
        if(arr[i]%2==0) cout<<arr[i]<<' ';
    }
    return 0;
}
