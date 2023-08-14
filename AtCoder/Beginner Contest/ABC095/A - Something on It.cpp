#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t=0;
  string s;
  cin>>s;
  for(int i=0;i<3;i++){s[i]=='o'?t++:t ;}
  cout<<700+t*100;
  return 0;
}
