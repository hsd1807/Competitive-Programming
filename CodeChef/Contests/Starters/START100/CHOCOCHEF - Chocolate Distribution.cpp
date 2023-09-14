#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n,jars[3];
        cin>>n;
        if((n-1)%2==0) {
            jars[0]=1;
        jars[1]=(n-1)/2;
        jars[2]=(n-1)/2;}
        else {
                jars[0]=2;
        jars[1]=(n-1)/2;
        jars[2]=(n-1)/2;
        }
        if(jars[0]%2==0 && jars[1]%2==0 && jars[2]%2==0){
            jars[0]+=2;
            jars[1]--;
            jars[2]--;
        }
        for(int i=0;i<3;i++) cout<<jars[i]<<' ';
        cout<<'\n';
    }
    return 0;
}
