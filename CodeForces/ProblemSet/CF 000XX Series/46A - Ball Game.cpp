#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int pass=1,pos=1;
    for(int i=1;i<n;i++){
        pos+=pass;
        pass++;
        if(pos%n==0) cout<<n<<" ";
        else cout<<pos%n<<" ";
    }
    return 0;
}
