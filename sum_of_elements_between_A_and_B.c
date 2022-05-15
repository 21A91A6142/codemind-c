#include<stdio.h>
int main()
{
    int a[100],i,n,k,m,s=0,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&k,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]>=k && a[i]<=b)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}