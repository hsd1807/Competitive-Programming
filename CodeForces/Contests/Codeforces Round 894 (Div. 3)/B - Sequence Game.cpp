#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++) 
            cin>>b[i];
        int a[n*2],mark=1;
        a[0]=b[0];
        for(int i=1;i<n;i++){
            if(b[i-1]<=b[i]){
                a[mark]=b[i];
                mark++;
            }
            else{
                a[mark]=b[i];
                mark++;
                a[mark]=b[i];
                mark++;
            }
        }
        cout<<mark<<'\n';
        for(int i=0;i<mark;i++) 
        cout<<a[i]<<' ';
        cout<<'\n';
    }
    return 0;
}
