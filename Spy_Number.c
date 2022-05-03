#include<stdio.h>
int main()
{
    int n,r,sum=0,prd=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        prd=prd*r;
        n=n/10;
    }
    if(sum==prd)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}