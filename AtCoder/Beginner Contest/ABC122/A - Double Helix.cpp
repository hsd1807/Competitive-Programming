#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    char b;
    cin>>b;
    cout<<(b=='A'?'T':b=='C'?'G':b=='G'?'C':'A');
    return 0;
}
