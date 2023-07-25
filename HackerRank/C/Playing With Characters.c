#include<stdio.h>
int main()
{
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    getchar();
    gets(sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
