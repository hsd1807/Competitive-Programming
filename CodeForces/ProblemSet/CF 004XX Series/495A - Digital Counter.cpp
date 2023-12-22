#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    vector<int> good={2,7,2,3,3,4,2,5,1,2};
    int n;
    cin>>n;
    int ones=n%10;
    int tens=n/10;
    cout<<good[tens]*good[ones];
    return 0;
}
