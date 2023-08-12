#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a,b,c;
  cin>>a>>b>>c;
  cout<<(a+b==c || b+c==a || a+c==b?"Yes":"No");
  return 0;
}
