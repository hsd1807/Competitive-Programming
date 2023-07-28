#include <stdio.h>
int main() 
{
    char num[1000];
    int i,digit[10];
    scanf("%s",num);
    for(i=0;i<10;i++) digit[i]=0;
    
    i=0;
    while(num[i]!='\0')
    {
        if(num[i]>=48 && num[i]<=57) digit[num[i]-48]++ ;
        i++;
    }
    
    for(i=0;i<10;i++) printf("%d ",digit[i]);
    return 0;
}
