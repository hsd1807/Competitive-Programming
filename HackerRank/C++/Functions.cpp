#include <iostream>
using namespace std;
int gofi(int,int,int,int);

int main() 
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<gofi(a,b,c,d);  
    return 0;
}

int gofi(int a, int b, int c, int d)
{
    return (a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):c>d?c:d));
}
