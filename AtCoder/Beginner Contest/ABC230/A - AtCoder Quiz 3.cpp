#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    cout<<"AGC"<<(n<10?"00":"0")<<(n<42?n:n+1);
    return 0;
}
