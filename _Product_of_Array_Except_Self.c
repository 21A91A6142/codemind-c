#include<stdio.h>
void printproduct(int k,int  a[],int n)
{
    int  i,s=1;
    for(i=0;i<n;i++)
    {
        if(a[i]!=k)
        {
            s*=a[i];
        }
    }
    printf("%d ",s);
}
int  main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printproduct(a[i],a,n);
    }
}