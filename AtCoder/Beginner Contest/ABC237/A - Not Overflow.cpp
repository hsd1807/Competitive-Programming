#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long int n;
    int ul=2147483647;
    int ll=-2147483648;
    cin>>n;
    cout<<(n>=ll&&n<=ul?"Yes":"No");
    return 0;
}
