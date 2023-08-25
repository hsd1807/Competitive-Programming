#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string days="SUMOTUWETHFRSA";
    string s;
    cin>>s;
    for(int i=0;i<14;i+=2){
        if(s[0]==days[i] && s[1]==days[i+1]){
            cout<<(i==0?7:7-i/2);
            return 0;
        }
    }
    return 0;
}
