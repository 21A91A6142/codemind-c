#include<stdio.h>
int main()
{
    int n,q,r,sum=0;
    scanf("%d",&n);
    q=n;
    while(q)
    {
        r=q%10;
        sum=sum+r;
        q=q/10;
    }
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}