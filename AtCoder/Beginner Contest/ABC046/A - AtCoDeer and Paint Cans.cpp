#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a,b,c;
  cin>>a>>b>>c;
  cout<<(a==b?b==c?1:2 :(b==c||c==a)?2:3);
  return 0;
}
