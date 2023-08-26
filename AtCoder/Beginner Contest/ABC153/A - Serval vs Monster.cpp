#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int h,a;
    cin>>h>>a;
    cout<<(h%a==0?h/a:(h/a)+1);
    return 0;
}
