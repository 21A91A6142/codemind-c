#include<stdio.h>
int main()
{
    int a[100],n,i,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            c=c+1;
        }
    }
    if(c==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}