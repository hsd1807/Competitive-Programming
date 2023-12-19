#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    bool divisible=false;
    int a,b,n;
    cin>>a>>b>>n;
    int i;
    for(i=0;i<10;i++){
        if((a*10+i)%b==0){
            a=a*10+i;
            divisible=true;
            break;
        }
    }
    if(!divisible){
        cout<<-1;
        return 0;
    }
    cout<<a;
    while(--n) cout<<0;
    return 0;
}
