#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int len=s.size();
    while(true){
        s.pop_back();
        s.pop_back();
        len-=2;
        if(s.substr(0,len/2)==s.substr(len/2,len/2)){
            cout<<len;
            break;
        }

    }
    return 0;
}
