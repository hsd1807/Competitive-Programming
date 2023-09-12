#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int h,w;
    cin>>h>>w;
    char image[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>image[i][j];
        }
    }
    
    int frame=w+2;
    while(frame--) cout<<'#';
    cout<<'\n';
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(j==0) cout<<'#';
            cout<<image[i][j];
            if(j==w-1) cout<<'#';
        }
        cout<<'\n';
    }
    frame=w+2;
    while(frame--) cout<<'#';
    return 0;
}
