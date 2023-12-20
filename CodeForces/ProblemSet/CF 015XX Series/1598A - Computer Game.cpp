#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        int currx=0,curry=0;
        bool possible=false;
        vector<string> level(2);
        cin>>level[0]>>level[1];
        level[0].push_back('1');
        level[1].push_back('1');
        while(true){
            if(currx==0){
                if(level[currx][curry+1]=='1' && level[currx+1][curry+1]=='1' && level[currx+1][curry]=='1' )
                    break;
                else if(level[currx][curry+1]=='0') curry++;
                else if(level[currx+1][curry+1]=='0') currx++,curry++;
                else currx++;
            }
            else{
                if(level[currx][curry+1]=='1' && level[currx-1][curry+1]=='1')
                    break;
                else if(level[currx][curry+1]=='0') curry++;
                else currx--,curry++;
            }
            if(currx==1&&curry==n-1){
                possible=true;
                break;
            }
        }
        cout<<(possible?"YES":"NO")<<'\n';
    }
    return 0;
}
