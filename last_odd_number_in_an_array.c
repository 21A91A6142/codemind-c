#include<stdio.h>
int main()
{
    int a[100],n,i,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            l=a[i];
        }
    }
    printf("%d",l);
}