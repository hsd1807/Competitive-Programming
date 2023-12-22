#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size()) {
        cout<<"NO";
        return 0;
    }
    int first=0,second=t.size()-1;
    while(second>=0){
        if(s[first]!=t[second]){
            cout<<"NO";
            return 0;
        }
        first++,second--;
    }
    cout<<"YES";
    return 0;
}
