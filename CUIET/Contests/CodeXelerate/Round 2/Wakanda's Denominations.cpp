#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int x;
    cin>>x;
    if(x%10<5) x -= x%10;
    else x+=(10-x%10);
    cout<<100-x;
    return 0;
}
