#include<bits/stdc++.h>
using namespace std;
bool Composite(int y)
{
    for(int i=3;i*i<=y;i+=2){
        if(y%i==0)
            return 1;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    if(n%2==0){
        cout<<4<<' '<<n-4;
        return 0;
    }
    else{
        int x=4,y=n-4;
        for(x;x<n;x+=2){
            if(Composite(y)){
                cout<<x<<' '<<y;
                return 0;
            }
            y-=2;
        }
    }
    return 0;
}
