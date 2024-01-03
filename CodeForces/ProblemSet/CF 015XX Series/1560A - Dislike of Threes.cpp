#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int k;
        cin>>k;
        int rem=k%6;
        if (rem==0){rem=6;k--;}
        for(int i=(k/6)*10;i<=(k/6*10)+10;i++){
            if(i%3&&i%10!=3){
            if(rem!=1) rem--;
            else {cout<<i<<'\n';break;}
            }
        }
    }
    return 0;
}
