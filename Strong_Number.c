#include<stdio.h>
int main()
{
    int n,q,r,a,i,sum=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        a=1;
        for(i=1;i<=r;i++)
        {
            a=a*i;
        }
        q=q/10;
        sum=sum+a;
    }
    if(sum==n)
    {
        printf("The number %d is a strong number",sum);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}