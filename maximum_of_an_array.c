#include<stdio.h>
int main()
{
    int a[100],n,l,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }
    printf("%d",l);
}