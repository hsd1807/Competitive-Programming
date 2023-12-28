#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        char square[3][3],row,col;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>square[i][j];
                if(square[i][j]=='?'){
                    row=i;
                    col=j;
                }
            }
        }
        vector<int> cnt(3);
        for(int i=0;i<3;i++)
            if(i!=row)
                cnt[square[i][col]-'A']++;
        for(int i=0;i<3;i++){
            if(cnt[i]==0) {
                char name=i+'A';
                cout<<name<<'\n';
            }
        }
    }
    return 0;
}
