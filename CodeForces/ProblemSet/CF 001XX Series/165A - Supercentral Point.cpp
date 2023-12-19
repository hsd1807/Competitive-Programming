#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<vector<int>> points(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>points[i][0]>>points[i][1];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        bool un=false,rn=false,ln=false,dn=false;
        for(int j=0;j<n;j++){
            if(j!=i){
                if(points[i][0]==points[j][0]){
                    if(points[i][1]<points[j][1])
                        un=true;
                    else if(points[i][1]>points[j][1])
                        dn=true;
                }
                if(points[i][1]==points[j][1]){
                    if(points[i][0]>points[j][0])
                        ln=true;
                    else if(points[i][0]<points[j][0])
                        rn=true;
                }
            }
            if(un==1 && rn==1 && ln==1 && dn==1){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
    return 0;
}
