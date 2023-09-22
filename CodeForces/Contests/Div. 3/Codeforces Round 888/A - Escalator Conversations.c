#include<stdio.h>
int main()
{
    int t,tc;
    scanf("%d",&tc);
    for(t=0;t<tc;t++)
    {
        int i,j,p,n,m,k,H,count=0,flag=0;
        int sd,hd;
        scanf("%d%d%d%d",&n,&m,&k,&H);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            for(j=1;j<=m;j++)
            {
                for(p=1;p<=m;p++)
                {
                    if(p!=j)
                    {
                    sd=j*k-p*k;
                    sd=sd>0?sd:-sd;
                    hd=arr[i]-H;
                    hd=(hd>0?hd:-hd);
                    if(sd==hd) {count++;flag=1;
                    break;}
                    }
                }
                if(flag==1) break;
            }
        }

        printf("%d ",count);
    }
    return 0;
}
