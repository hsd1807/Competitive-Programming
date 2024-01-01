#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,x,sum=0;
    cin>>n>>x;
    while(n--){
        int s;
        cin>>s;
        if(s<=x)
            sum+=s;
    }
    cout<<sum;
    return 0;
}
