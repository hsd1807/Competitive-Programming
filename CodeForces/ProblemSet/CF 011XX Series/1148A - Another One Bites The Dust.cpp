#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long  a,b,c;
    cin >> a >> b >> c;
    cout << (a==b?a+b+2*c:min(a,b)+min(a,b)+1+2*c)<<'\n';
    return 0;
}
