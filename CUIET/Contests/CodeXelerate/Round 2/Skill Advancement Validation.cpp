#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    bool c=true;
    for(int i=0;i<n;i++) {cin>>arr1[i];arr2[i]=arr1[i];}
    sort(arr1,arr1+n);
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            c=false;
            break;
        }
    }
    if(c) cout<<"true";
    else cout<<"false";
    return 0;
}
