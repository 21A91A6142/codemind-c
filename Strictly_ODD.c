#include<stdio.h>
int main()
{
    int a[100],i,n,k=0,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0 && a[i]%2!=0)
        {
            c=c+1;
        }
    }
    //printf("%d",c);
    for(j=0;j<n;j++)
    {
        if(a[j]%2!=0)
        {
            k=k+1;
        }
    }
    //printf("%d",k);
    if(k==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}