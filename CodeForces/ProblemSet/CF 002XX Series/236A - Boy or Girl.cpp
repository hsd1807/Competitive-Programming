#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    vector<bool> characters(26,0);
    for(int i=0;i<s.size();i++)
        characters[s[i]-'a']=1;
    int distinct;
    for(int i=0;i<26;i++)
        if(characters[i]) distinct++;
    cout<<(distinct%2?"IGNORE HIM!":"CHAT WITH HER!");
    return 0;
}
