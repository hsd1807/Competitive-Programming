#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int y, b, r,mn;
    cin >> y >> b >> r;
    
    if(b-y>0 && r-y>1)
        cout<<3*y+3<<'\n';
    else if(r-b>0 && y-b>-1)
        cout<<3*b<<'\n';
    else
        cout<<3*r-3<<'\n';
    return 0; 
}
