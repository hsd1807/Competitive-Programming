#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    bool beautiful = true;
    for(int i=0;i<s.size();i++){
        if(count(s.begin(),s.end(),s[i])%2!=0){
            beautiful = false;
            break;
        }
    }
    cout<<(beautiful?"Yes":"No");
    return 0;
}
