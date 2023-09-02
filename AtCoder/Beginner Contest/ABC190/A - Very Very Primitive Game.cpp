#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    cout<<((c==0&&a>b)||(c==1&&a>=b)?"Takahashi":"Aoki");
    return 0;
}
