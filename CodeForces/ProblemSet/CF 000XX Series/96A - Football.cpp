#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int start=0,end=1;
    bool dangerous=false;
    while(end<s.size()){
        if(s[start]!=s[end])
            start=end;
        if(end-start+1 >= 7){
            dangerous=true;
            break;
        }
        end++;
    }
    cout<<(dangerous?"YES":"NO");
    return 0;
}
