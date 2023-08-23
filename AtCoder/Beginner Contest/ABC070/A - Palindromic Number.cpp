#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int N=n;
    int palindrome=0;
    while(n>0)
    {
        palindrome=palindrome*10 + n%10;
        n/=10;
    }
    cout<<(palindrome==N?"Yes":"No");
    return 0;
}
