#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string grid;
    int marbles=0;
    cin>>grid;
    for(auto i:grid) if(i=='1') marbles++;
    cout<<marbles;
    return 0;
}
