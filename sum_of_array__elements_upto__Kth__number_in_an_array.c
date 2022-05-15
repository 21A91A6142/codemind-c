#include<stdio.h>
int main()
{
    int a[100],i,n,k,m,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]>k)
        {
            break;
        }
        else
        {
            s=s+a[i];
        }
    }
    /*printf("%d ",m);
    for(i=0;i<=m;i++)
    {
        s=s+a[i];
    }*/
    printf("%d",s);
}