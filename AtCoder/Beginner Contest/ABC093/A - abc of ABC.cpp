#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  string s;
  cin>>s;
  cout<<(s[0]*s[1]*s[2]=='a'*'b'*'c' && s[0]+s[1]+s[2]=='a'+'b'+'c' ?"Yes":"No");
  return 0;
}
