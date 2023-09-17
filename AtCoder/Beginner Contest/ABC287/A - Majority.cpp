#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,f=0,a=0;
    cin>>n;
    string s[n];
    
    for(int i=0;i<n;i++){
            cin>>s[i];
            if(s[i][0]=='F') f++;
            else a++;
    }
    cout<<(f>a?"Yes":"No");
    return 0;
}
