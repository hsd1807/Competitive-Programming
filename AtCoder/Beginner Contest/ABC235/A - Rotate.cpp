#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    vector<int> abc(4);
    int sum=0;
    cin>>abc[0];
    for(int i=1;abc[0]>0;i++){
        abc[i]=abc[0]%10;
        abc[i]=abc[i]*100 + abc[i]*10 + abc[i];
        sum+=abc[i];
        abc[0]/=10;
    }
    cout<<sum;
    return 0;
}
