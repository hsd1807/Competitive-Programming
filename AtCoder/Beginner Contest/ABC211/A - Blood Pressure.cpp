#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    float c=(a-b)%3==0?(a-b)/3+b : float(a-b)/3+b;
    cout<<c;
    return 0;
}
