#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,q,r,i,sum=0;
    scanf("%d",&n);
    l=pow(n,2);
    q=l;
    while(q)
    {
        r=q%10;
        sum=sum+r;
        q=q/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}