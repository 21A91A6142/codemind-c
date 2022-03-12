#include<stdio.h>
int main()
{
    int n;
    float sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+float (1/i);
    }
    printf("%.2f",sum);
}