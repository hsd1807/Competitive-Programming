#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int mini=INT_MAX;
    string s;
    cin>>s;
    for(int i=0;i<s.size()-2;i++){
        int num=(s[i]-'0')*100+(s[i+1]-'0')*10+(s[i+2]-'0');
        if(abs(num-753)<mini)
            mini=abs(num-753);
    }
    cout<<mini;
    return 0;
}
