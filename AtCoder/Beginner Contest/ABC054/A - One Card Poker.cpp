#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int a,b;
  cin>>a>>b;
  cout<<(a==b?"Draw":a==1 || (a>b&&b!=1)?"Alice":"Bob");
  return 0;
}
