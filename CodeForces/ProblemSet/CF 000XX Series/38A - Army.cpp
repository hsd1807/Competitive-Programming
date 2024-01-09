#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> ranks(n);
    for(int i=0;i<n-1;i++){
        cin>>ranks[i];
    }
    int a,b,years=0;
    cin>>a>>b;
    for(int i=a;i<b;i++){
        years+=ranks[i-1];
    }
    cout<<years;
    return 0;
}
