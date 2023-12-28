#include<bits/stdc++.h>
using namespace std;
int collatz(int n){
    if(n%2) return 3*n+1;
    else return n/2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int s,cnt=1;;
    cin>>s;
    if(s<=2 || s==4) cout<<4;
    else{
    while(true){
        s=collatz(s);
        cnt++;
        if(s==4){
            cout<<cnt+3;
            return 0;
        }
    }
    }
    return 0;
}
