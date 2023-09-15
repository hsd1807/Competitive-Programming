#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    for(int i=0;i<3;i++){
    int cnt=count(s.begin(),s.end(),s[i]);
    if(cnt==1){
    cout<<s[i];
    return 0;
    }
    }
    cout<<-1;
    return 0;
}
