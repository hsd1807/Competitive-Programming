#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int a,b,x;
  cin>>a>>b>>x;
  cout<<(x<a?"NO": x-a<=b?"YES":"NO");
  return 0;
}
