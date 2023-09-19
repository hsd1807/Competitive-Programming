#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    cout<<(n%5<3? n-n%5 : n+(5-n%5));
    return 0;
}
