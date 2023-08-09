#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
  cin.tie(0);
  int a,b,c;
  int five=2,seven=1;
  cin>>a>>b>>c;

  if(a==5) five--; else if(a==7) seven--;
  if(b==5) five--; else if(b==7) seven--;
  if(c==5) five--; else if(c==7) seven--;

  if(five==0 && seven==0) cout<<"YES";
  else cout<<"NO";
  return 0;
}
