#include <iostream>
using namespace std;
void update(int*,int*);
int main() 
{
    int a,b;
    cin>>a>>b;
    update(&a,&b);
    cout<<a<<'\n'<<b;   
    return 0;
}

void update (int *a, int *b)
{
    int temp=*a;
    *a=*a+*b;
    *b=temp-*b>0?temp-*b:*b-temp;
} 
