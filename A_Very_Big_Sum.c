#include<stdio.h>
int main()
{
    long int a[100],n,sum=0,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%ld",sum);
    
}