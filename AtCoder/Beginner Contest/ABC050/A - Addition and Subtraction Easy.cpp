#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a,b;char op;
  cin>>a>>op>>b;
  cout<<(op=='+'?a+b:a-b);
  return 0;
}
