#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    char grid[2][3];
    for(int i=0;i<2;i++) for(int j=0;j<3;j++) cin>>grid[i][j];
    cout<<(grid[0][1]==grid[1][1] && grid[0][0]==grid[1][2] && grid[0][2]==grid[1][0]?"YES":"NO");
    return 0;
}
