#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    int x=(a+b)/2;
    float y = (float) (a+b)/2;
    y-=x;
    cout<<(y>=0.5?x+1:x);
    return 0;
}
