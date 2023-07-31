#include <stdio.h>

void calculate_the_maximum(int n, int k) 
{
    int i,j,maxand=0,maxor=0,maxxor=0;
    
    for(i=1;i<=n-1;i++)
    {
        for(j=i+1;j<=n;j++)
        {
        if(maxand<(i&j) && (i&j)<k) maxand=(i&j);
        if(maxor<(i|j) && (i|j)<k) maxor=(i|j);
        if(maxxor<(i^j) && (i^j)<k) maxxor=(i^j);         
        }
    }
    printf("%d\n%d\n%d",maxand,maxor,maxxor);
}

int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
