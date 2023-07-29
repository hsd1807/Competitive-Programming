#include<stdio.h>
int main()
{
    int i,j,k,n,end,start;
    scanf("%d",&n);
    int arr[n*2-1];
    for(i=0;i<n*2-1;i++) 
    {
        arr[i]=n;
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=1;i<n;i++)
    {
        start=i;
        end=n*2-1-i;
        for(j=0;j<n*2-1;j++)
        {
           if(j>=start && j<end) arr[j]--;  /*Dry Run*/
           printf("%d ",arr[j]);
        }
        printf("\n");    
    }
    
    for(i=n-1;i>0;i--)
    {
        start=i;
        end=n*2-1-i;
        for(j=0;j<n*2-1;j++)
        {
           if(j>=start && j<end) arr[j]++;  /*Dry Run*/
           printf("%d ",arr[j]);
        }
        printf("\n");    
    }
    
    return 0;
}
