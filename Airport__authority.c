#include<stdio.h>
int main()
{
    int a[100],n,t,s=0,d=0,total,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]<=t)
        {
            s=s+1;
        }
        else
        {
            d=d+2;
        }
    }
    total=s+d;
    printf("%d",total);
}