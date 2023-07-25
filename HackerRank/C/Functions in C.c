#include <stdio.h>
int max(int x,int y)
{
    return (x>y?x:y);
}

int max_of_four(int a, int b, int c, int d)
{
    int m;
    m=max(a,b);
    m=max(m,c);
    m=max(m,d);
    return m;
}

int main() {
    int a, b, c, d, ans;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
