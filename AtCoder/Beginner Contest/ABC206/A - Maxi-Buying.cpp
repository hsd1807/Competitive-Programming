#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int taxed=1.08*n;
    cout<<(taxed<206?"Yay!": taxed==206?"so-so":":(");
    return 0;
}
