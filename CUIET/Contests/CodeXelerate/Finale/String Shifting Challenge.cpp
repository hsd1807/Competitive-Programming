#include<bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
        if(arr[i][2]==0){
            for(int j=arr[i][0];j<=arr[i][1];j++){
                if(s[j]=='a') s[j]='z';
                else s[j]--;
            }
        }
        else for(int j=arr[i][0];j<=arr[i][1];j++){
                if(s[j]=='z') s[j]='a';
                else s[j]++;    
        }
    }
    cout<<s;
    return 0;
}
