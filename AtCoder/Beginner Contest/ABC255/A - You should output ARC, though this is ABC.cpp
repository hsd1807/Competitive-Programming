#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int r,c;
    cin>>r>>c;
    int matrix[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<matrix[--r][--c];
    return 0;
}
