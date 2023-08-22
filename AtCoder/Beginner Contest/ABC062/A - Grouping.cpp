#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int arr[4]={4,6,9,11};
    int x,y,ans=0;
    cin>>x>>y;
  
    for(int i:arr)
        if(i==x || i==y) ans++;
    cout<<((ans==0 || ans==2) && (x!=2 && y!=2)?"Yes":"No");

    return 0;
}
