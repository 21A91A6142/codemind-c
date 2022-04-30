#include<stdio.h>
int main()
{
    int n,m,i,c=0,c1=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c=c+i;
        }
    }
    for(i=1;i<=m/2;i++)
    {
        if(m%i==0)
        {
            c1=c1+i;
        }
    }
    if(c==m && c1==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}