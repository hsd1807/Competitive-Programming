#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int x,a,b;
    cin>>x>>a>>b;
    cout<<(b<=a?"delicious":b<=a+x?"safe":"dangerous");
    return 0;
}
