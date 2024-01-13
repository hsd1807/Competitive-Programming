#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;true;i++){
        n-=i*(i+1)/2;
        if(n<0){
            cout<<i-1;
            break;
        }
    }
    return 0;
}
