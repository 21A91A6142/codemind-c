#include<stdio.h>
int main()
{
    int a[100],i,n,l,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        l=1;
        for(j=1;j<=a[i];j++)
        {
            l=l*j;
        }
        printf("%d",l);
        printf("
");
    }
}