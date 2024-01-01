#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,a;
    cin>>n;
    cin>>a;
    n--;
    while(n--){
        int A;
        cin>>A;
        if(A!=a){
            cout<<"No";
            return 0;
        }
        a=A;
    }
    cout<<"Yes";
    return 0;
}
