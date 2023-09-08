#include<bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int m,n,islands=0;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            if(arr[i][j]==1) {islands++;
            if(i>0&&j>0) 
                if(arr[i-1][j-1]==1) islands--;
                else if(arr[i][j-1]==1) islands--;
                else if(arr[i-1][j]==1) islands--;
             else if(i>0)
                if(arr[i-1][j]==1) islands--;
             else if(j>0)
                if(arr[i][j-1]==1) islands--;
                             }
        }
    cout<<(islands==4?2:islands);
    return 0;
}
