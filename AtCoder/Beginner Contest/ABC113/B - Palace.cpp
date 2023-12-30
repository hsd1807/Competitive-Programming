#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,t,a;
    cin>>n>>t>>a;
    double minh=INT_MAX;
    int index=-1;
    for(int i=0;i<n;i++){
        float h;
        cin>>h;
        double temp=t-h*0.006;
        if(abs(a-temp)<minh){
            minh=abs(a-temp);
            index=i;
        }
    }
    cout<<index+1;
    return 0;
}
