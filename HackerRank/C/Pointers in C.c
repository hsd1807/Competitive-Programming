#include <stdio.h>

void update(int *a,int *b) 
{
    int A=*a;
    *a=(*a)+(*b);
    *b=A-(*b);
    if(*b<0) *b=-*b;
}

int main() 
{
    int a, b;
    scanf("%d%d", &a, &b);
    update(&a,&b);
    printf("%d\n%d", a, b);
    return 0;
}
