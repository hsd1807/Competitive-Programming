#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    int ino=0;
    int mino=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        int j;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                ino--;
                break;
            }}
        if(j==i) ino++;
        if(ino>=mino) mino=ino;}
    cout<<mino;
    return 0;
}
