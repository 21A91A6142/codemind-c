#include<stdio.h>
int main()
{
    int a[100],n,k,l,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(l<a[i])
        l=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(k+a[i]>=l)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        printf(" ");
    }
}