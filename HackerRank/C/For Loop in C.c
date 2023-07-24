#include<stdio.h>
int main() 
{
    int a,b,n;
    scanf("%d%d", &a, &b);
    for(n=a;n<=b;n++)
    {
        if(n>9)
        {
            if(n%2==0)printf("even");
            else printf("odd");
        }
        else if (n==1) printf("one");
        else if (n==2) printf("two");
        else if (n==3) printf("three");
        else if (n==4) printf("four");
        else if (n==5) printf("five");
        else if (n==6) printf("six");
        else if (n==7) printf("seven");
        else if (n==8) printf("eight");
        else printf("nine");
        printf("\n");
    }
    return 0;
}
